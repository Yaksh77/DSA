#include<iostream>
#include<vector>
using namespace std;

void change(int* ptr) // Pass by reference using pointer
{
    *ptr = 20; // Dereferencing
}

void changeUsingAlias(int& a, vector<int>& vec) // Pass by reference using alias
{
    a = 20;
    for(int i = 0; i < vec.size(); i++){
        vec[i] *= vec[i];
    }
}
int main(){

    int a = 10;
    vector<int> vec = {1,2,3,4,5};
    // cout << "Before changing a : " << a << endl;
    // change(&a);
    // cout << "After changing a : " << a << endl;

    cout << "----- Using Alias -----" << endl;
    cout << "Before changing a : " << a << endl;
    changeUsingAlias(a,vec);
    cout << "After changing a : " << a << endl;
     for(int val : vec){
        cout << val << " ";
    }

    return 0;
}