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

    // cout << a << endl;
    // cout << *(ptr) << endl;

    // cout << ptr << endl;
    // cout << *(ptrptr) << endl;

    // cout << a << endl;
    // cout << *(ptr) << endl;
    // cout << **(ptrptr) << endl;

    // int b = 20;
    // int* ptr1 = &b;
    // int** ptr2 = &ptr1;

    // cout << ptr1 << endl;
    // cout << &b << endl;
    // cout << *(ptr1) << endl;
    // cout << **(ptr2) << endl;
    // cout << *(&b) << endl;

    // ----- Null Pointer -----
    int* nullPtr = NULL;
    // cout << nullPtr << endl;
    // cout << &nullPtr << endl;

    // ----- Array Pointer -----
    //* array pointers are constant pointers.

    int arr[] = {1,2,3,4,5};
    // cout << arr << endl;
    // cout << *arr << endl; // Dereferencing arr pointer
    // cout << *(arr+1) << endl;
    // cout << *(arr+2) << endl;
    // cout << *(arr+3) << endl;
    // cout << *(arr+4) << endl;
    // int a = 10;
    // arr = &a; // It is not possible


    // ----- Pointer Arithmetic -----
    int num = 20;
    int* p = &a;
    // cout << p << endl;
    // p++;
    // cout << p << endl;
    // ++p;
    // cout << p << endl;
    // --p;
    // cout << p << endl;

    // p += 2;
    // cout << p << endl;
    // cout << &p << endl;

    // ------ Add anf subtract pointers ------

    // int* ptr2;
    // int* ptr1 = ptr2 + 2;
    // cout << ptr1 << " " << ptr2 << endl;
    // cout << ptr1 - ptr2 << endl;

    // ------ Compare pointers ------

    int* ptr1;
    int* ptr2;

    cout << ptr1 << " " << ptr2 << endl;
    cout << (ptr1 < ptr2) << endl;
    cout << (ptr1 > ptr2) << endl;
    return 0;
}