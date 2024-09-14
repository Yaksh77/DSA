#include <iostream>
using namespace std;

// ----- Pass by value -----
// int sum(int num1, int num2){
//     num1 = num1 + 10; // 20
//     num2 = num2 + 10; // 30
//     int sum = num1 + num2; // 50
//     return sum;
// }

// // Calculate sum of 1 to N numbers
// int nSum(int num){
//     int sum = 0;
//     for(int i=1; i<=num;i++){
//         sum += i;
//     }
//     return sum;
// }

// to find ncr value

int factorial(int n){
    int fact = 1;
    
    for(int i=1; i<=n;i++){
        fact *= i;
    }
    return fact;
}

double ncr(int n, int r){
    int factN = factorial(n);
    int factR = factorial(r);
    int facrNcr = factorial(n-r);
    double result = factN / (factR * facrNcr);
    return result;
}

// function to find prime number
int prime(int num){
    bool isPrime = true;
    for(int i=2; i <=num - 1; i++){
        if(num % i == 0){
            isPrime = false;
            break;
        }else{
            isPrime = true;
            break;
        }
    }
    if(isPrime){
        cout << num << " is prime number\n";
       
        
    }else{
        cout << num << " is not prime number\n";

    }
}

// sum of n prime numbers
bool newPrime(int num){
    bool isPrime = true;
    if(num == 0 || num ==1){
        isPrime = false;
    }
   for(int i=2; i < num; i++){
    
    if(num % i == 0){
        isPrime = false;
    }
   }
   return isPrime;
   
}

// // Calculate sum of digits of numbers
// int sumDigit(int num){
//     int sum = 0;
//     while(num > 0){
//         int digit = num % 10;
//         sum += digit;
//          num /= 10;
//     }
//      return sum;
// }

int main(){
    // int num1 = 10, num2 = 20;
    // int result = sum(num1,num2);
    // cout << "num1 = " << num1 << " num2 = " << num2 << endl;
    // cout << "Sum of 2 number is : " << result << endl;
    // int total = nSum(5);
    // cout << "Sum of n number is : " << total << endl;
    // int fact = factorial(5);
    // cout << "fact of n number is : " << fact << endl;
    // int sumOfDigit = sumDigit(235);
    // cout << "Sum of Digit is : " << sumOfDigit << endl;
    // double value = ncr(10,3);
    // cout << "n C r = " << value << endl;
    // prime(2);
    int N = 10;
    for(int j=1; j <= N; j++){
        if(newPrime(j)){
            cout << j << endl;
        }
    }
   
    return 0;
}