#include<iostream>
#include<vector>
using namespace std;

void mergeArrays(vector<int>& arr1, vector<int>& arr2, int& m, int& n){
    int idx = m + n - 1;
    int i = m - 1, j = n - 1;
    while (i >= 0 && j >=0)
    {
       if(arr1[i] >= arr2[j]){
        arr1[idx--] = arr1[i--];
       }else {
        arr1[idx--] = arr2[j--];
       }
    }
    while (j>=0)
    {
       arr1[idx--] = arr2[j--];
    }
    
}

void printArr(vector<int>& arr1){
    for(int val : arr1){
        cout << val << " ";
    }
}

int main(){

    vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    int arr1Size = 3;
    int arr2Size = arr2.size();
    cout << arr1Size << endl;
    cout << arr2Size << endl;
    mergeArrays(arr1,arr2,arr1Size,arr2Size);
    printArr(arr1);
    return 0;
}