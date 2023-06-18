class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int maxPrice = 0;
     int mini = INT_MAX;
     
      for(int i=0;i<prices.size();i++){
          if(prices[i]<mini){
              mini = prices[i];
          }
          maxPrice = max(maxPrice,prices[i]-mini);
      }
        return maxPrice;
    }
};