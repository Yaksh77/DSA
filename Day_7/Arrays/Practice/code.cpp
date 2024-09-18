#include<iostream>
using namespace std;

void calcSumProduct(int arr[],int size){
    int sum = 0;
    int product = 1;
    for(int i = 0; i < size; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of all elements : " << sum << endl;
    cout << "Product of all elements : " << product << endl;

}

void swapMinMax(int arr[],int size){
    int smallest = INT32_MAX;
    int largest = INT32_MIN;
    int indexLarge = 0;
    int indexSmall = 0;
    for(int i=0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            indexSmall = i;
        }
    }
    for(int i=0; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
            indexLarge = i;
        }
    }
   swap(arr[indexSmall],arr[indexLarge]);
}

void intersection(int arr[],int arr1[],int size,int size1){
  
    int big = (size > size1) ? size : size1;
    int small = (size1 < size) ? size1 : size;

    for(int i = 0; i < big; i++){
        for(int j = 0; j < small; j++){
            if(arr[i] == arr1[j]){
                cout << arr[i] << " ";
            }
        }
    }
}

void uniqueValue(int arr[],int size){
    int r = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                // r++;
            cout << arr[i] << " " << endl;
            }
        }
    }
    // cout << r;
    // cout << size << endl;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int arr1[] = {2,3,4};
    // calcSumProduct(arr,5);
    // swapMinMax(arr,5);
    // for(int i=0; i < 5; i++){
    //     cout << arr[i] << endl;
    // }
    int size = sizeof(arr) / sizeof(int);
    int size1 = sizeof(arr1) / sizeof(int);
    intersection(arr,arr1,size,size1);
    // uniqueValue(arr,size);
    return 0;
}