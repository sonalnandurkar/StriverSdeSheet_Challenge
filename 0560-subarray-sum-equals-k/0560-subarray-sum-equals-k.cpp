class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int n = nums.size();
        int count = 0;
        unordered_map<int,int> prevsum;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }
            if(prevsum.find(sum-k) != prevsum.end())
                count+=prevsum[sum-k]; //20-7=13 if 13 prsesent then key=13 value=1 count+=value
            
            prevsum[sum]++;
        }
        return count;
    }
};