class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int mini = INT_MAX;
      int diff = 0;
      for(int i=0;i<prices.size();i++){
          if(prices[i]<mini){
              mini = prices[i];
          }
          diff = max(diff,prices[i]-mini);
      }
        return diff;
    }
};