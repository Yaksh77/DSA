#include<iostream>
#include<vector>
using namespace std;

int searchPeak(vector<int>& arr){
    int n = arr.size();
    int start = 1, end = n - 2;
    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }
        if(arr[mid-1] < arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    
}

int main(){
    vector<int> vec = {0,3,8,9,5,2};
    int result = searchPeak(vec);
    cout << "The peak element is at position : " << result;

    return 0;
}