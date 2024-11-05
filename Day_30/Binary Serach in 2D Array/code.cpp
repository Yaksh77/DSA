#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool serach(vector<vector<int>> arr, int target){
     int row = arr.size();
    int col  = arr[0].size();
    int start = 0;
    int end = row * col - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        int element = arr[mid / col][mid % col];
        if(target  == element){
            return true;
        }else if(target < element){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
   bool result = serach(arr,5);

   cout << result << endl;
    
    
    return 0;
}