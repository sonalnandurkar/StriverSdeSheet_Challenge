class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       vector<int> arr(nums.size()+1,0);
        vector<int> ans;
       for(int i=0;i<nums.size();i++){
           arr[nums[i]]++;
       }
        for(int i=1;i<arr.size();i++){
            if(arr[i] == 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
