class Solution {
public:

 string commonStr(string str1,string str2){
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
      for(int i=0;i<strs.size();i++){
          str = commonStr(strs[i],str);
      }
       return str;
    }
};