#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** ptrptr = &ptr;

    // cout << ptr << endl;
    // cout << &a << endl;

    // cout << &ptr << endl;
    // cout << ptrptr << endl;

    // ----- (*) Dereferencing operator -----

    cout << a << endl;
    cout << *(ptr) << endl;

    cout << ptr << endl;
    cout << *(ptrptr) << endl;

    cout << a << endl;
    cout << *(ptr) << endl;
    cout << **(ptrptr) << endl;

    int b = 20;
    int* ptr1 = &b;
    int** ptr2 = &ptr1;

    cout << ptr1 << endl;
    cout << &b << endl;
    cout << *(ptr1) << endl;
    cout << **(ptr2) << endl;
    cout << *(&b) << endl;


    return 0;
}