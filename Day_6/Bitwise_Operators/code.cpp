#include<iostream>
using namespace std;

int gloableScope = 10;

void fun(){
    int x = 10;
}

 // Practice-1
    // First Approach
    // bool findPowerOf2(int num){
    //     if(num == 0){
    //         return 0;
    //     }
    //     while(num != 1){
    //         if(num % 2 != 0){
    //             return 0;
    //         }
    //         return 1;
    //     }
    // }

    // Second Approach
    bool find(int num){
        if(num == 0 || num < 0){
            return false;
        }
    int ans = (!(num & (num-1)));
    return ans;
    }

// Practice-2

int reverse(int num){
    int rem = 0;
    int ans = 0;
    if(num == 0){
        cout << "Please enter value greater than 0";
    }
    while(num != 0){
        rem = num % 10;
        ans = (ans * 10) + rem;
        num /= 10;
    }
    return ans;
}

int main(){

    cout << (5 & 10) << endl;
    cout << (5 | 10) << endl;
    cout << (5 ^ 10) << endl;
    cout << (10 >> 2) << endl;
    cout << (10 << 1) << endl;

    // This will cause an error because variable x is local scope variable
    // cout << x << endl; 
    
    // This will print because it is a global variable 
    cout << gloableScope << endl;

    // Data type modifiers
    cout << sizeof(int) << " Bytes" << endl;
    cout << sizeof(long int) << " Bytes" << endl;
    cout << sizeof(short int) << " Bytes" << endl;
    cout << sizeof(long long int) << " Bytes" << endl;

    // Below code give wrong value beacause unsigned int can only store positive values 0 to 2^32 - 1
    unsigned int y = -10;
    cout << y << endl;

    cout << sizeof(unsigned int) << " Bytes" << endl;
    cout << sizeof(signed int) << " Bytes" << endl;

    // findPowerOf2(4) ? cout << "Yes\n" : cout << "No\n";

    find(16) ? cout << "Yes\n" : cout << "No\n";
    cout << reverse(123);

    return 0;
}