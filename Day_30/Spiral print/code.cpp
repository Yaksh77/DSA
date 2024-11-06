#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> matrix){

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    int total = row * col;
    int count = 0;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count < total){
        // Print starting row
        for(int index = startingCol; count < total && index <= endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // Print ending col
        for(int index = startingRow;  count < total && index <= endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // Print ending row
        for(int index = endingCol;  count < total && index >= startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // Print starting col
        for(int index = endingRow;  count < total && index >= startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> result = spiralPrint(matrix);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
        }
    return 0;
}