#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// O(n) Time Complexity
// int searchSingleInSortedArray(vector<int>& arr){
//     for(int i = 0; i<arr.size(); i += 2){
//     int freq = 1;
//     if(arr[i] == arr[i+1]){
//         freq++;
//     }else if(freq % 2 != 0){
//         return arr[i];
//     }

//     }
//     return -1;

// }

// O(n) Time Complexity
// int searchSingleInSortedArray(vector<int>& arr){
//     int ans = 0;
//     for(int i = 0; i<arr.size(); i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// O(log n) Time Complexity
int searchSingleInSortedArray(vector<int>& arr){
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
       int mid = start + (end - start)/2;
       if(arr[mid - 1] != arr[mid] && arr[mid + 1] != arr[mid]){
        return arr[mid];
       }else if(mid % 2 == 0){
        if(arr[mid - 1] == arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
       }else{
        if(arr[mid - 1] == arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
       }
    }
    return -1;
    
}

int main(){
    vector<int> arr = {1,1,2,2,3,3,4,8,8};
    int result = searchSingleInSortedArray(arr);
    cout << result;

     return 0;
}