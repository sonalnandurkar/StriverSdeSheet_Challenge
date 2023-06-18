class Solution {
public:
    void sortColors(vector<int>& nums) {
       int countZero = 0;
       int countOne = 0;
       int countTwo = 0;
      for(int i=0;i<nums.size();i++){
          if(nums[i] == 0){
              countZero++;
          }
          else if(nums[i] == 1){
              countOne++;
          }
          else if(nums[i] == 2){
              countTwo++;
          }
      }
        
        int k=0;
        while(countZero > 0){
            nums[k] = 0;
            k++;
            countZero--;
        }
          while(countOne > 0){
            nums[k] = 1;
            k++;
            countOne--;
        }
          while(countTwo > 0){
            nums[k] = 2;
            k++;
            countTwo--;
        }
       
        
    }
};

