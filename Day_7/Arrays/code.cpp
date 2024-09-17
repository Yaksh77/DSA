#include<iostream>
using namespace std;

void changeFunc(int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] *= 2;
    }
}

int linearSearch(int arr[],int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

void reverseArr(int arr[], int size){
    int start = 0;
    int end = size - 1;
    for(start,end; start < end; start++,end--){
        swap(arr[start],arr[end]);
    }
}

int main(){
    // ----- Arrays -----

    // Creating and intitalizating of array
    int arr[5];

    // Accessing array
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // cout << arr[4] << endl;

    // Accessing using loops
    int sizeOfArray = sizeof(arr) / sizeof(int);
    // cout << sizeOfArray << endl;


    for(int i = 0; i < sizeOfArray; i++){
        cout << "Enter value for " << i+1 << " : ";
        cin >> arr[i];
    }
    
    // for(int i = 0; i < sizeOfArray; i++){
    //     cout << arr[i] << endl;
    // }

    // Find smallest element from array
    // long long int smallest = INT32_MAX;
    // for(int i = 0; i < sizeOfArray; i++){
    //     if(arr[i] < smallest){
    //         smallest  = arr[i];
    //     }
    //     // smallest = min(arr[i],smallest);
    // }
    // cout << "Smallest element is : " << smallest << endl;

    // Find largest element from array
    
    // long long int largest = INT32_MIN;
    // int largetIndex = -1;
    // for(int i = 0; i < sizeOfArray; i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //         largetIndex++;
    //     }
    // }
    // cout << "Largest element is : " << largest << endl;
    // cout << "Largest element index is : " << largetIndex << endl;

    // ----- Pass by reference -----
    // Arrays are always passed by reference

    // int arr2[3] = {1,2,3};
    // changeFunc(arr2,3);
    // for(int i = 0; i < 3; i++){
    //     cout << arr2[i] << endl;
    // }

    // ----- Linear Search -----
    // int target = 20;
    // int result = linearSearch(arr,sizeOfArray,target);
    // if(result == -1){
    //     cout << "Element doesn't exist";
    // }else{
    //     cout << "Target alement at index is : " << result;
    // }

    // ----- Reverse an array -----
    int arr1[6] = {1,2,3,4,5,6};
    reverseArr(arr1,6);
    for(int i=0; i < 6; i++){
        cout << arr1[i] << endl;
    }
    return 0;
}