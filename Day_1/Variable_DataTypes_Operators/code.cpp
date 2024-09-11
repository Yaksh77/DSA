#include <iostream>
using namespace std;

int main(){
    cout << "Yaksh\nChudasama\n";
    
    // ---- Variables and Data types ----

    int age = 21; // --- 4 Bytes ---
    cout << age << endl;

    char grade = 'A'; // --- 1 Byte ---
    cout << grade << endl;

    bool isSafe = true; // --- 1 Byte ---
    cout << isSafe << endl;

    float val = 100.89f; // --- 4 Byte ---
    cout << val << endl;

    double val1 = 100.99; // --- 8 Byte ---
    cout << val1 << endl;

// ----- Type casting -----

// Implicit type conversion

int num = 10;
double dNum = num;
cout << dNum << endl;

// Explicit type conversion

double bigNum = 100.900;
int smNum = (int)bigNum;
cout << smNum << endl;

// ----- Input in C++ -----

int price;
cout << "Enter your age :";
cin >> price;
cout << "Your age is :"<< price << endl;

// ----- Operators ----

// Arithmetic

int num1 = 10;
int num2 = 20;

cout << "Addition = " << (num1 + num2) << endl;
cout << "Difference = " << (num1 - num2) << endl;
cout << "Product = " << (num1 * num2) << endl;
cout << "Divison = " << (num1 / (double)num2) << endl; // Returns quationt
cout << "Moduls = " << (num1 % num2) << endl; // Returns reminder

// Relational

cout << ( num1 > num2) << endl; // returns false => 0
cout << ( num1 < num2) << endl; // returns true => 1
cout << ( 10 <= 10) << endl; // returns true => 1
cout << ( 20 >= 30) << endl; // returns flase => 0
cout << ( 20 != 30) << endl; // returns true => 1

// Logical

cout << !( 20 != 30) << endl; // returns false => 0
cout << ((20 != 30) && (20 > 30))<< endl; // returns false => 0
cout << ((20 > 30) || (20 < 30)) << endl; // returns true => 1

// Unary 

// Increment
num1 = ++num2;
cout << num1 << endl; // prints 21 beacause it increments first

int num3 = 10;
num1 = num3++;
cout << num1 << endl; // prints 10 beacause it increments after assigning

// Decrement

int num4 = 10;
int num5 = 20;

num4 = --num5;
cout << num4 << endl; // prints 19 beacause it decrements first

int num6 = 10;
num4 = num6--;
cout << num4 << endl; // prints 10 beacause it decrements after assigning

// Practice-1

int takeNum1, takeNum2;
cout << "Enter number1 :";
cin >> takeNum1;
cout << "Enter number2 :";
cin >> takeNum2;
int sum = takeNum1 + takeNum2;
cout << "Sum of 2 number is :" << sum << endl;


}