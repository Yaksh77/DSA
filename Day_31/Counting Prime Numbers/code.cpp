#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    vector<bool> arr(n+1,1);
    int count = 0;
    arr[0] = arr[1] = false;
    for(int i = 2; i < n; i++){
        if(arr[i]){
            count++;
            for(int j = 2 * i; j < n; j+=i){
                arr[j] = 0;            }
        }
        
    }
    return count;
}
int main(){

    int n = 10000;
    cout << countPrime(n) << endl;
    return 0;
}