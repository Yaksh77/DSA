#include<iostream>
using namespace std;

int findGCD(int a, int b){
    if(a == 0){
        return b;
    }else if(b == 0){
        return a;
    }else{
        while (a != b)
        {
           if(a > b){
            a = a - b;
           }else{
            b = b - a;
           }
        }
    }
    return a;
}
int main(){
    cout << findGCD(72,24) << endl;

    return 0;
}