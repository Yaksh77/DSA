#include<iostream>
using namespace std;

#define PI 3.14; // Here This will be replaced with whereever they call in the program before compilation of the program

// Global Variable

// *It will be accessible everywhere in program 
int score = 15; // But it is not recommended way to declare variable because it can be alter by any function in program

void func(){
    score++;
}

int main(){

    // Constant Variable
    // *Whose value never get change
    const int age = 23;
    // age++; // This will give an error because we cannot change value of constants
    cout << age << endl;

    int radius = 5;
   double area =  radius * radius * PI;
   cout << area << endl;

   cout << score << endl;
   func();
   score++;
   cout << score << endl;

    return 0;

}