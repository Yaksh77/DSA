#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1,2,3,4,5};

    // ----- Print all subarrays -----

    // for(int st = 0; st < vec.size(); st++){
    //     for(int end = st; end < vec.size(); end++){
    //         for(int i = st; i <= end; i++){
    //             cout << vec[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }

    // ----- Brute force approach -----

    // int maxSum = INT32_MIN;
    // for(int st = 0; st < vec.size(); st++)
    // {   int currSum = 0;
    //     for(int end = st; end < vec.size(); end++){
    //         currSum += vec[end];
    //         maxSum = max(currSum,maxSum);
    //     }
    // }    
    // cout << maxSum; 

    // ----- Kadane's Alogrithm optimal solution -----
    int currSum = 0, maxSum = INT32_MIN;
    for(int i = 0; i < vec.size(); i++){
        currSum += vec[i];
        maxSum = max(currSum,maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    } 
    cout << maxSum;    

    return 0;
}