#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;


// ------ Recursive method -------

int binarySearch(vector<int>& nums,int& target, int start, int end){
    if(start <= end){
        int mid = start + (end - start)/2;
        if(target > nums[mid]){
          return  binarySearch(nums,target,mid+1,end);
        }else if(target < nums[mid]){
            return binarySearch(nums,target,start,mid-1);
        }else{
            return mid;
        }
    }
    return -1;

}

int main(){

vector<int> nums = {10,55,78,99,105,800};
int n = nums.size();
int target = 105;
int result = binarySearch(nums,target,0,n-1);
cout << "The targeted element is at position : " << result;

    return 0;
}
