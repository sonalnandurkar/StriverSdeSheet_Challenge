class Solution {
public:
    int majorityElement(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int count = 0;
      int first = nums[0];
      int n = nums.size();
      for(int i=0;i<nums.size();i++){
          if(nums[i] == first){
              count++;
              if(count>n/2){
                  return first;
              }
          } else {
              first = nums[i];
              count = 1;
          }
      }
        return first;
    }
};


