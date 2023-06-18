class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> res;
        
        for(int i=0;i<arr.size();i++){
            if(i>0 && arr[i] == arr[i-1]) {
                continue;
            }
            int j=i+1;
            int k=arr.size()-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum < 0){
                    j++;
                } else if(sum > 0){
                    k--;
                } else {
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    res.push_back(temp);
                    j++;
                    k--;
                   while(j<k && arr[j] == arr[j-1]){
                       j++;
                   }
                    while(j < k && arr[k] == arr[k+1]){
                        k--;
                    }
                    
                }
            }
          
            
        }
          return res;
        
        
//       set<vector<int>> ans;
//       vector<vector<int>> res;
//       for(int i=0;i<arr.size();i++){
//            set<int> st;
//           for(int j=i+1;j<arr.size();j++){
//               int third = -(arr[i]+arr[j]);
//               if(st.find(third) != st.end()){
//                   vector<int> temp = {arr[i],arr[j],third};
//                   sort(temp.begin(),temp.end());
//                   ans.insert(temp);
//               }
//               st.insert(arr[j]);
              
//           }
//       }
//         for(auto it: ans){
//             res.push_back(it);
//         }
//         return res;
    }
};