#include<iostream>
using namespace std;

int fibonacciNumber(int n){
    if (n == 0)
    {
        return 0;
    }if(n== 1){
         return 1;
    }

    int ans = fibonacciNumber(n-1) + fibonacciNumber(n-2);
    return ans;
    
}

int countWaysToReachStair(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }

    int ans = countWaysToReachStair(n-1) + countWaysToReachStair(n-2);
    return ans;
}

void sayDigit(int n, string arr[]){
    if(n == 0){
        return;
    }

    int digit = n % 10;
    n = n / 10;
    sayDigit(n,arr);
    cout << arr[digit] << " ";
}


int main(){
    int n;
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin >> n;
    // cout << fibonacciNumber(n) << endl;
    // cout << countWaysToReachStair(n) << endl;
    sayDigit(n,arr);

    return 0;    
}