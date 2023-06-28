class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(int i=0;i<nums.size();i++){
           if(nums[i]<mini){
               mini = nums[i];
           }
            if(nums[i]>maxi){
                maxi = nums[i];
            }
            
        }
       int diff = (maxi-k) - (mini + k) ; 
        return max(0,diff);
        
    }
};