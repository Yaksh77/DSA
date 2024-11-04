#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){

    // Taking input for 2D Array 
    int arr[3][4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }
// Printing 2D Array row-wise
    // for(int i = 0; i < 3; i++){
    //     for(int j = 0; j < 4; j++){
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

// Printing 2D Array row-wise
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    int target;
    cout << "Enter Element to search : ";
    cin >> target;
    if(isPresent(arr,target,3,4)){
        cout << "Element exists";
    }else{
        cout << "Element does not exist";
    }
    return 0;
}