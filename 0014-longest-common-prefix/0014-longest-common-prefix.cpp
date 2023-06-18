class Solution {
public:


    
  string longestCommonPrefix(vector<string>& strs) {
       sort(strs.begin(),strs.end());
       string str = strs[0];
       string str2 = strs[strs.size()-1];
       string res = "";
       for(int i=0;i<str.size();i++){
           if(str[i] == str2[i]){
               res+=str[i];
           } else {
               break;
           }
       }
      return res;
    }
};