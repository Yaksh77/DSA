#include<iostream>
using namespace std;

void update(int& i){
    i++;
}
int main(){

    // -------- Reference Variable concept ---------
    // int i = 5;
    // int& ref = i;

    // cout << i << endl;
    // cout << ref << endl;
    // i++;
    // cout << i << endl;
    // ref++;
    // cout << ref << endl;
    // update(i);
    // cout << i << endl;
    // cout << ref << endl;

    // -------- Static Memory Allocation -------
    // int i = 5; // Here it will create space of int size in stack memory during compile time
    
    int* p = new int; // Here it will create space of int size in Heap memory during run time and return address that stores in stack memory
    *p = 10;
    cout << *p << endl;
    delete p; // Freeing memory occupied in heap memory
    cout << *p << endl; // This will give garbage value


    // int n ;
    // cin >> n;
    // int arr[n]; // This is bad practice

    // int arr[10] = {1,2,3,4,5,6}; // Static Memory Allocation in Stack

    int n;
    cin >> n;
    int* arr = new int[n]; // Dynamic Memory Allocation in Heap

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }



    return 0;
}