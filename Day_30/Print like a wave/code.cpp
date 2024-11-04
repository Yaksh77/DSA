#include<iostream>
#include<vector>
using namespace std;

vector<int> printWave(vector<vector<int>> arr,int nRow, int nCol){
    vector<int> ans;
    for(int col = 0; col < nCol; col++){
        if(col & 1){
            // For odd column index
            // Bottom to top
            for(int row = nRow - 1; row >= 0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // For even column index
            // Top to bottom
            for(int row=0; row < nRow; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main(){
     vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans = printWave(arr,3,3);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }

    return 0;
}