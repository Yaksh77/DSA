#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int maxWater(vector<int> height)
// {
//     int n = height.size();
//     int maximumWater = 0;
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//           int  containerWidth = j - i;
//            int ContainerHeight = min(height[j],height[i]);
//            int area = containerWidth * ContainerHeight;
//             maximumWater = max(maximumWater,area);
//         }
//     }
//     return maximumWater;
// }

// Optimal two pointer approach

int maxWater(vector<int> height){
    int n = height.size();
    int maxWater = 0, lp = 0, rp = n - 1;
    while(lp < rp){
        int containerWidth = rp - lp;
        int containerHeight = min(height[lp],height[rp]);
        int area = containerWidth * containerHeight;
        maxWater = max(maxWater,area);

        (height[lp] < height[rp])? lp++ : rp--;
    }
    return maxWater;
}

int main(){

    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    int result = maxWater(vec);
    cout << result;

    return 0;
}
