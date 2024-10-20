#include<iostream>
#include<vector>
using namespace std;

// Slide optimal approach then sort() method
void sorting(vector<int>& arr){
    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            count0++;
        }else if(arr[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }

    for(int i=0; i<count0;i++){
        arr[i] = 0;
    }
    for(int i=count0; i < (count1+count0); i++){
        arr[i] = 1;
    }
    for(int i=(count1+count0); i< (count2+count1+count0); i++){
        arr[i] = 2;
    }
}

void optimumSorting(vector<int>& arr){
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
void printArr(vector<int>& arr){
    for(int val : arr){
        cout << val << " ";
    }
}
int main(){

    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    optimumSorting(arr);
    printArr(arr);

    return 0;
}