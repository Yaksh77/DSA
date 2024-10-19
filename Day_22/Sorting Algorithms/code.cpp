#include<iostream>
#include<vector>
using namespace std;

    // ------ Bubble Sort -----
// void bubbleSort(vector<int>& vec){
//  int n = vec.size();
//     bool isSwap = false;
//     for(int i = 0; i < n-1; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             if(vec[j] > vec[j+1]){
//                 swap(vec[j],vec[j+1]);
//                     isSwap = true;
//             }
//         }
//     }
//     if(!isSwap){
//         return;
//     }
// }

// void selectionSort(vector<int>& vec){
//     int n = vec.size();
//     for(int i = 0; i < n-1; i++){
//         int smallestIdx = i; // unsorted part starting
//         for(int j = i+1; j < n; j++){
//             if(vec[j] < vec[smallestIdx]){
//                 smallestIdx = j;
//             }
//         }
//     swap(vec[i],vec[smallestIdx]);
//     }
// }

void insertionSort(vector<int>& vec){
    int n = vec.size();
    for(int i = 1; i< n; i++){
        int curr = vec[i];
        int prev = i-1;
        while(prev >=0 && vec[prev] > curr){
            vec[prev + 1] = vec[prev];
            prev--;
        }
        vec[prev+1] = curr;

    }
}

void printArr(vector<int>& vec){

    for(int ele : vec){
        cout << ele << " ";
    }
}

int main(){
    vector<int> vec = {3,4,2,1,5};
    // bubbleSort(vec);
    // selectionSort(vec);
    insertionSort(vec);
   printArr(vec);

    return 0;
}