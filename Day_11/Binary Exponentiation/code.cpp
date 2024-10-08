#include<iostream>
#include<vector>
using namespace std;

double power(double x, int n){
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && n % 2 == 0){
        return 1.0;
    }else if(x == -1 && n % 2 != 0){
        return -1.0;
    }

    int binaryForm = n;
        if(binaryForm < 0){
            x = 1/x;
            binaryForm = -binaryForm;
        }
    double ans = 1;

    while(binaryForm > 0){
        if(binaryForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
    }
   return ans;
}

int main(){


    double ans = power(3,5);
    cout << ans;
   

    return 0;
}