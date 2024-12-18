#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>> arr, int target){
    int row = arr.size();
    int col = arr[0].size();
    int rowIndex = 0;
    int colIndex = col-1;
    while(rowIndex < row && colIndex >= 0){
        int element  = arr[rowIndex][colIndex];
        if(element == target){
            return true;
        }else if(element < target){
            rowIndex++;
        }else{
            colIndex--;
        }
    }
    return false;
    }
int main(){
    vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,23},{18,21,23,26,30}};
    cout << search(arr,23) << endl;

    return 0;
}