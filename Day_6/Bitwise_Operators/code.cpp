#include<iostream>
using namespace std;

int gloableScope = 10;

void fun(){
    int x = 10;
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

    return 0;
}