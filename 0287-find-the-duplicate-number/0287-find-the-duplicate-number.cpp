class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     int slow =  nums[0];
     int fast = nums[0];
     while(true){
         slow = nums[slow];
         fast = nums[nums[fast]];
         if(slow == fast) break;
     }
     slow = nums[0];
     while(slow!=fast){
         slow = nums[slow];
         fast = nums[fast];
     }
    return slow;

        // map<int,int> mp;
        // for(int i=0;i<nums.size();i++){
        //     mp[nums[i]]++;
        // }
        // int ans=0;
        // for(auto i:mp){
        //     if(i.second>1){
        //        ans = i.first;
        //     }
        // }
        // return ans;
    }
};