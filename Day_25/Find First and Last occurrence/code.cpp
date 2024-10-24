#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int& len, int& key){
    int start = 0, end = len - 1, ans = -1;
    while (start <= end)
    {
        int mid = start +(end - start)/2;
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }else if(arr[mid]>key){
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }
    }
    return ans;
    
}
int lastOccurrence(vector<int>& arr, int& len, int& key){
    int start = 0, end = len - 1, ans = -1;
    while (start <= end)
    {
        int mid = start +(end - start)/2;
        if(arr[mid]==key){
            ans = mid;
            start = mid + 1;
        }else if(arr[mid]>key){
            end = mid - 1;
        }else if(arr[mid] < key){
            start = mid + 1;
        }
    }
    return ans;
    
}

int main(){
    vector<int> arr = {1,2,3,3,5};
    int arrSize = arr.size();
    int key = 3;
    int result = firstOccurrence(arr,arrSize,key);
    cout << result;
    return 0;
}