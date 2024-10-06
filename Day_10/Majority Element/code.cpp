#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// ----- Brute force approach -----

// int major(vector<int> nums){
//      for(int val : nums){
//         int frequency = 0;
//         for(int ele : nums){
//             if(val == ele){
//                 frequency++;
//             }
//         }
//         if(frequency > (nums.size()/2)){
//             return val;
//         }
//     }
// }

// int major(vector<int> nums){
//     sort(nums.begin(),nums.end());
//     int freq = 1, ans = nums[0];
//     for(int i = 1; i < nums.size(); i++){
//         if(nums[i] == nums[i - 1]){
//             freq++;
//         }else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > (nums.size()/2)){
//             return ans;
//         }
//     }
// }

// ------ Moore's algorithm -----

int major(vector<int> nums){
    int freq = 0, ans = 0;
    for(int i = 0; i < nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
            return ans;
}

int main(){

    vector<int> nums = {1,1,1,2,1,2,2,2,1};
   
    // int ans = major(nums);
    // cout << ans;
    int ans = major(nums);
    cout << ans;

    return 0;
}