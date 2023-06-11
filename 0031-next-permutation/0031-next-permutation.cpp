class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int inflexp = -1;
        for(int i = n-2;i>=0;i--){
            if(nums[i] < nums[i+1]){
                inflexp = i;
                break;   
            }
        }
        for(int i=n-1;i>=inflexp && inflexp != -1; i--){
            if(nums[i]>nums[inflexp]){
                swap(nums[i],nums[inflexp]);
                break;
            }
        }
        reverse(nums.begin()+inflexp+1,nums.end());
    }
};