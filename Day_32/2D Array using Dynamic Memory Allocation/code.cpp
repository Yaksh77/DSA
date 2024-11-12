#include<iostream>
using namespace std;
int main()
{
    int rows,cols;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout << "Enter the number of columns: ";
    cin>>cols;
    
    int** arr = new int*[rows];
    for(int i = 0; i < rows; i++){
        arr[i] = new int[cols];
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Releasing Memory of 2D Array using delete operator
    for(int i = 0; i < cols; i++){ // Releasing column arrays
        delete [] arr[i];
    }
    delete []arr; // Releasing rows 


}