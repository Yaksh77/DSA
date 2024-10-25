#include<iostream>
#include<vector>
using namespace std;

int  findPivot(vector<int>& arr){
    int n = arr.size(), start = 0, end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    return end;

}

int main(){
    vector<int> arr ={3,8,10,17,1,2};
    int result = findPivot(arr);
    cout << result;
    return 0;
}