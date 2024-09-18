#include<iostream>
#include <algorithm>
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

// Swap alternative
void swapAlternative(int arr[], int size){
    for(int i = 0; i < size; i += 2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }
    }
}

// find unique element
int uniqueElement(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

void printArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

// 0 1 sort
void sortArr(int arr[], int size){
    int i = 0;
    int j = size-1;
    while(i < size && j > i){
        if(arr[i] == 0){
            i++;
        }else if(arr[j] == 1){
            j--;
        }else if(arr[i] != 0 && arr[j] != 1){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
    printArr(arr,size);
}


int main(){
    // int arr[] = {1,2,3,4,5};
    // int arr1[] = {2,3,4};
    // int size = sizeof(arr) / sizeof(int);
    // int size1 = sizeof(arr1) / sizeof(int);
    // calcSumProduct(arr,5);
    // swapMinMax(arr,5);
    // for(int i=0; i < 5; i++){
    //     cout << arr[i] << endl;
    // }
    // intersection(arr,arr1,size,size1);
    // uniqueValue(arr,size);
    // swapAlternative(arr,size);
    // printArr(arr,size);

    // int arr4[7] = {1,2,1,1,2,3,10};
    // int result = uniqueElement(arr4,7);
    // cout << result << endl;
    
    int arr5[12] = {0,1,1,0,1,0,0,1,0,1,1,0};
    sortArr(arr5,12);
    return 0;
}