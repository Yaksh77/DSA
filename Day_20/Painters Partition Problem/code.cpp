#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isValid(vector<int> arr,int n, int m, int maxAllowedValue){
    int painters = 1, time = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]> maxAllowedValue){
            return false;
        }else if(arr[i] + time <= maxAllowedValue){
            time += arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }
    if(painters <= m){
        return true;
    }else{
        return false;
    }
}

int painterPartition(vector<int> arr,int m){
    int n = arr.size();
    int start = 0, end = 0, ans = -1;
    for(int val : arr){
        start = max(start,val);
        end += val;
        
    }
    while (start <= end)
    {
      int mid = start + (end - start)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return ans;

}

int main(){
    vector<int> arr = {40,30,10,20};
    int painter = 2;
    int result = painterPartition(arr,painter);
    cout << result;
    return 0;
}