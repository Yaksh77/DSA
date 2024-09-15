#include <iostream>
using namespace std;

// Decimal to Binary conversion
int convert(int num){

    int pow = 1;
    int rem = 0;
    int ans = 0;
    while(num > 0){
        rem = num % 2;
        num = (num/2);
        ans += (rem*pow);
        pow *= 10;
    }
    return ans;
}

// Binary to decimal conversion
int convertToDecimal(int binaryNum){
    int ans = 0;
    int pow = 1;
    int rem = 0;
    while(binaryNum > 0){
        rem = binaryNum % 10;
        ans += (rem*pow);
        binaryNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){

// Decimal to binary conversion
cout << convert(25) << endl;
// Binary to Decimal conversion
cout << convertToDecimal(11001);

    return 0;
}