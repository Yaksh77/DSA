#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int>& arr){
    int pivot = -1, n = arr.size();
    for(int i = n-2; i >= 0; i-- ){
        if(arr[i]<arr[i+1]){
            pivot = i;
            break;
        }
    }
    int i = 0, j = n -1;
    if(pivot == -1){
        while(i <= j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    for(int i = n-1; i > pivot; i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }
    int k = pivot + 1, m = n - 1;
    while(k <= m){
        swap(arr[k],arr[m]);
        k++;
        m--;
    }
}

void printArr(vector<int>& arr){
    for(int val : arr){
        cout << val << " ";
    }
}

int main(){
    vector<int> arr = {1,2,3,6,5,4};
    permutation(arr);
    printArr(arr);
    return 0;
}