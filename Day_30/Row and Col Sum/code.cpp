#include<iostream>
using namespace std;

void rowSum(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[i][j];
        }
            cout << sum << " ";
    }
        cout << endl;
}
void colSum(int arr[][3], int row, int col){
    for(int i = 0; i < col; i++){
        int sum = 0;
        for(int j = 0; j < row; j++){
            sum += arr[j][i];
        }
            cout << sum << " ";
    }
        cout << endl;
}
int main(){

    int arr[3][3]= {{3,4,11},{2,12,1},{7,8,7}};
   rowSum(arr,3,3);
   colSum(arr,3,3);

    return 0;
}