class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> s1;
        int left = 0, right = 0 , n = s.size();
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
        
        
        
        
        
        
        
        
//        int maxi = 0;
        
//        for(int i=0;i<s.size();i++){
//            set<char> s1;
//            string str = "";
//            for(int j=i;j<s.size();j++){
//                s1.insert(s[j]);
//                str += s[j];
//                if(s1.size() == str.size()){
//                    maxi = max(j-i+1,maxi);
//                }
//            }
//        }
//         return maxi;
    }
};