class Solution {
public:
    
    string CommonStr(string str1, string str2){
        string str = "";
        for(int i=0;i<str1.size();i++){
            if(str1[i] == str2[i]){
                str += str1[i];
            } else {
                break;
            }
        }
        return str;
    }
  
    string longestCommonPrefix(vector<string>& strs) {
       string str = strs[0];
       int n = strs.size();
       for(int i=0;i<n;i++){
           str = CommonStr(strs[i],str);
       }
        return str;
    }
};