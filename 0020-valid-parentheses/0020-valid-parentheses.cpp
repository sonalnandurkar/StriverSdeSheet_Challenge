class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;
        if(s[0] == '}' || s[0] == ']' || s[0] == ')'){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                ans.push(s[i]);
            }
            else if(!ans.empty() && ((s[i] == '}' && ans.top() == '{') || (s[i] == ')' && ans.top() == '(') || (s[i] == ']' && ans.top() == '[')) ){
                ans.pop();
            } else {
                return false;
            }
        }
        if(ans.size() == 0) return true;
        else return false;
    }
};