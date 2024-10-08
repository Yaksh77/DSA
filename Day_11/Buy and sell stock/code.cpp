#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int buyStock(vector<int> prices){
    int bestBuy = prices[0];
    int maxProfit = 0;
    
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] > bestBuy){
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy,prices[i]);
    }
    return maxProfit;
}

int main(){

    vector<int> vec = {7,6,1,5,3,2};
    int result = buyStock(vec);
    cout << "Max profit is : " << result;

    return 0;
}