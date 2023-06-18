class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       vector<vector<int>> ans;
       for(int i=0;i<arr.size();i++){
           if(i>0 && arr[i] == arr[i-1]) {
               continue;
           }
           int j = i+1;
           int k = arr.size()-1;
           while(j<k){
               int sum = arr[i] + arr[j] + arr[k];
               if(sum < 0){
                   j++;
               } else if(sum > 0){
                   k--;
               } else {
                   vector<int> temp = {arr[i],arr[j],arr[k]};
                   ans.push_back(temp);
                   j++;
                   k--;
                   while(j<k && arr[j] == arr[j-1]){
                       j++;
                   }
                   while(j<k && arr[k] == arr[k+1]){
                       k--;
                   }
               }
           }
       }
        return ans;
    }
};