class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
     sort(arr.begin(),arr.end());
     vector<vector<int>> ans;
     for(int i=0;i<arr.size();i++){
        if(i>0 && arr[i] == arr[i-1]){
            continue;
        }
        int current = arr[i],j=i+1,k=arr.size()-1;
        while(j<k){
            if(current + arr[j] + arr[k] == 0){
                // vector<int> temp = {current,arr[j],arr[k]};
                ans.push_back({current,arr[j],arr[k]});
                j++;
                k--;
                while(j<k && arr[j] == arr[j-1] ){
                    
                    j++;
                    
                }
                while(j<k && arr[k] == arr[k+1]){
                    k--;
                    
                }
                
                
            } else if(current + arr[j] + arr[k] < 0){
                j++;
            } else {
                k--;
                
            }
        }
         
         
     }
    return ans;
        
//         int n = nums.size();
//         set<vector<int>> res;
        
//         for(int i=0;i<n;i++){
//              set<int> s1;
//             for(int j=i+1;j<n;j++){
//                  int third = -(nums[i]+nums[j]);
//                 if(s1.find(third) != s1.end()){
//                  vector<int> temp = {nums[i],nums[j],third};
//                  sort(temp.begin(),temp.end());
//                  res.insert(temp);
//                 }
//                  s1.insert(nums[j]);
//              }
//             }
//         vector<vector<int>> ans(res.begin(),res.end());
//         return ans;
        
        
        
//         vector<vector<int>> temp;
//         set<vector<int>> res;
       
        
//         for(int i=0;i<nums.size();i++){
//            for(int j=i+1;j<nums.size();j++){
//                for(int k=j+1;k<nums.size();k++){
//                    if(nums[i]+nums[j]+nums[k] == 0){
//                      vector<int> op = {nums[i],nums[j],nums[k]};
//                      sort(op.begin(),op.end());
//                      res.insert(op);
                     
//                    }
//                }
//            }
//         }
//      for(auto it:res){
//          temp.push_back(it);
//      }
//         return temp;
    }
};