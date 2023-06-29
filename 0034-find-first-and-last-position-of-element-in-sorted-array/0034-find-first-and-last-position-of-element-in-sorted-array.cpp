class Solution {
public:

    int firstele(vector<int>& arr,int n,int target){
        int s=0;
        int e=n-1;
        int ans = -1;
     
        while(s<=e){
              int mid=s+(e-s)/2;
            if(arr[mid] == target){
                ans=mid;
                e=mid-1;
            }else if(arr[mid]<target){
                s=mid+1;
            }else if(arr[mid]>target){
                e=mid-1;
            }
           // mid = s+(e-s)/2;
        }
        return ans;
    }
    int secondele(vector<int>& arr,int n,int target){
        int s=0;
        int e=n-1;
        int ans = -1;
       
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid] == target){
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]<target){
                s=mid+1;
            }else if(arr[mid]>target){
                e=mid-1;
            }
            // mid = s+(e-s)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> ans;
       int n = nums.size();
       int first = firstele(nums,n,target);
       int second = secondele(nums,n,target);
       ans.push_back(first);
       ans.push_back(second);
       return ans;
    }
};