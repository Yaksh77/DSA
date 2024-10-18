#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int>& arr, int& c, int& minAllowedDistance){
    int cows = 1, lastPosition = arr[0];
    sort(arr.begin(),arr.end());
    for(int i = 1; i < arr.size(); i++){
        if((arr[i] - lastPosition) >= minAllowedDistance){
            cows++;
            lastPosition = arr[i];
        }
        if(cows == c){
            return true;
        }
    }
    return false;
}


int agressiveCows(vector<int>& arr, int& cows){
    int start = 1, maxValue = 0, minValue = 0, ans = 0;
    for(int val : arr ){
        maxValue = max(maxValue,val);
        minValue = min(minValue,val);
    }
    int end = maxValue - minValue;
    while (start <= end)
    {
        int mid = start + (end - start) /2;
        if(isValid(arr,cows,mid)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
    
}

int main(){
    vector<int> arr = {1,2,8,4,9};
    int cows = 3;
    int result = agressiveCows(arr,cows);
    cout << result;
     return 0;
}