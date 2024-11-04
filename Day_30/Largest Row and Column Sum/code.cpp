#include<iostream>
using namespace std;

int largestRowSum(int arr[][3],int row, int col){
    int maxElement = INT32_MIN;
    int rowIndex = 0;
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j =0;j < col; j++){
            sum += arr[i][j];
        }
        if(sum > maxElement){
            maxElement = sum;
            rowIndex++;
        }
        
    }
    cout << "Maximum sum of rows is : " << maxElement << endl;
    return rowIndex;
}
int main(){
    int arr[3][3] = {{3,4,11},{2,12,1},{7,8,7}};
    int result = largestRowSum(arr,3,3);
    cout << result;
    return 0;
}