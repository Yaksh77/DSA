#include<iostream>
#include<vector>
using namespace std;

int findSquareroot(int num){
    int start = 0;
    int end = num;
    long long int ans = -1;
    while(start <= end){
       long long int mid = start + (end - start)/2;
        if(mid*mid == num){
            return mid;
        }else if(mid* mid <= num){
            ans = mid;
            start = mid+1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
} 

double precision(int num, int prec, int tempSol){
    double ans = tempSol;
    double factor = 1;
    for(int i =0; i < prec; i++){
        factor /= 10;
        for(double j = ans; j*j < num; j+=factor){
            ans = j;
        }
    }
    return ans;

}

int main(){

    int result = findSquareroot(37);
    double mainResult = precision(37,3,result);
    cout << mainResult;
    return 0;
}