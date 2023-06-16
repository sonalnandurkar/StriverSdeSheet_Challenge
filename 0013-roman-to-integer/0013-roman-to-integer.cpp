class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp{
            {'I' , 1},
            {'V' , 5},
            {'X' , 10},
            {'L' , 50},
            {'C' , 100},
            {'D' , 500},
            {'M' , 1000},
        };
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if((i+1) < s.size() && mp[s[i]] < mp[s[i+1]]){
                ans -= mp[s[i]];
            } else {
                ans += mp[s[i]];
            }
        }
        
        return ans;
        
        // int sum = 0;
        // for(int i=0;i<s.size();i++){
        //     if(s[i] == 'I' && s[i+1] == 'V'){
        //         sum += 4;
        //         i++;
        //     }
        //     else if(s[i] == 'I' && s[i+1] == 'X'){
        //         sum += 9;
        //         i++;
        //     }
        //     else if(s[i] == 'X' && s[i+1] == 'L'){
        //         sum += 40;
        //         i++;
        //     }
        //      else if(s[i] == 'X' && s[i+1] == 'C'){
        //         sum += 90;
        //          i++;
        //     }
        //     else if(s[i] == 'C' && s[i+1] == 'D'){
        //         sum += 400;
        //         i++;
        //     }
        //      else if(s[i] == 'C' && s[i+1] == 'M'){
        //         sum += 900;
        //          i++;
        //     }
        //     else if(s[i] == 'I'){
        //         sum += 1;
        //     }
        //      else if(s[i] == 'V'){
        //         sum += 5;
        //     }
        //      else if(s[i] == 'X'){
        //         sum += 10;
        //     }
        //      else if(s[i] == 'L'){
        //         sum += 50;
        //     }
        //     else if(s[i] == 'C'){
        //         sum += 100;
        //     }
        //     else if(s[i] == 'D'){
        //         sum += 500;
        //     }
        //     else if(s[i] == 'M'){
        //         sum += 1000;
        //     }
        // }
        // return sum;
    }
};