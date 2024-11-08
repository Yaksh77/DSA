#include<iostream>
using namespace std;

int modularExponentiation(int x, int n, int m){
    int result = 1;
    if(n&1){
        result  = (1LL * (result) * x) % m;
    }
    n = (1LL * (n) >> 1)%m;
    x = (x * x)%m;

    return result;
}
int main(){
    cout << modularExponentiation(4,3,10) << endl;

    return 0;
}