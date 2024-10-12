#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;


// ------ Iterative method -------

int binarySearch(vector<int>& nums,int& target){
    // sort(nums.begin(),nums.end()); // Not applicable
    int start = 0, end = nums.size() - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(target > nums[mid]){
            start = mid + 1;
        }else if(target < nums[mid]){
            end = mid - 1;
        }else{
            return mid;
        }

    }
    return -1;

}

int main(){

vector<int> nums = {10,55,78,99,105,800};
int target = 55;
int result = binarySearch(nums,target);
cout << "The targeted element is at position : " << result;

    return 0;
}
