class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target - nums[i]) != mp.end()){
                 temp = {i,mp[target - nums[i]]};
                // temp.push_back(i);
                // temp.push_back(mp[target-nums[i]]);
            } else {
                mp[nums[i]] = i;
            }
        }
        return temp;
    }
};