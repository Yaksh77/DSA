#include<iostream>
#include<vector>
using namespace std;

int stringCompression(vector<char> &arr){
    int n = arr.size();
    int i = 0;
    int ansIndex = 0;
    while(i < n){
        int j = i+1;
        while(j<n && arr[i] == arr[j]){
            j++;
        }
        arr[ansIndex++] = arr[i];
        int count = j - i;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch : cnt){
                arr[ansIndex++] = ch;
            }
        }
    i = j;
    }
    return ansIndex;
}

int main(){

    vector<char> arr = {'a','a','b','c','c','c'};
    int ans = stringCompression(arr);
    for(int i = 0; i < ans; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}