#include<iostream>
#include<vector>
using namespace std;

// ------ Optimal Approach ------

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;
    int pairSum = 0;
    while(i < j){
        pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }else if(pairSum < target){
            i++;
        }else if(pairSum == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main(){
// ----- Brute Force Approach -----
    int target = 26;
    vector<int> vec = {2,7,11,15};
    vector<int> ans;
//     for(int i = 0; i < vec.size(); i++){
//         for(int j = 0; j < vec.size(); j++){
//             if((vec[i] + vec[j]) == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//     }
//    cout << ans[0] << " " << ans[1];

ans = pairSum(vec,target);
cout << ans[0] << " " << ans[1];


    return 0;
}

