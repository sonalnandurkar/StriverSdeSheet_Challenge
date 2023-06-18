class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left = 0,right = 0,n = s.size();
       set<char> s1;
       int maxlength = 0;
       while(right < n){
           while(s1.find(s[right]) != s1.end()){
               s1.erase(s[left]);
               left++;
             
           }
           maxlength = max(right-left+1,maxlength);  
               
           s1.insert(s[right]);
           right++;
       }
        return maxlength;
    }
};