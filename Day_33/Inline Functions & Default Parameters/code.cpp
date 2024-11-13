#include<iostream>
using namespace std;


// Inline Function
inline int getMax(int& num1, int& num2){ // Here the body of the inline function is called before the compilation whereever it is called in the program
    return (num1 > num2)? num1: num2;
}

// Default Parameters
void printArr(int arr[], int n, int start=0, int end=5){ // Default parameters should be always written from right to left format(fashion) '<--'
    for(int i = start; i < end; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int num1 = 10;
    int num2 = 20;
    int maxEle = getMax(num1,num2); // Here This will be replaced by function body before compilation
    cout << maxEle << endl;

    int arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr,size,0,4);
    return 0;
}