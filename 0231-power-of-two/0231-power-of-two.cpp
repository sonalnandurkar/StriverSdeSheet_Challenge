class Solution {
public:
    bool isPowerOfTwo(int n) {
       // return n>0 && !(n & (n-1));
        
        if(n> 0 && (n & (n-1))==0){
             return true ; 
        } else {
            return false;
        }
                               
        
        // for(int i=0;i<=30;i++){
        //     if(pow(2,i) == n){
        //         return true;
        //     }
        // }
        // return false;
        
    }
};