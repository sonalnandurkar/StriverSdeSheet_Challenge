class Solution {
public:
    void sortColors(vector<int>& arr) {
       int i=0,k=0,j=arr.size()-1;
       while(i<=j){
          if(arr[i] == 0){
              swap(arr[i++],arr[k++]);
          } else if(arr[i] == 1){
              i++;
          } else {
              swap(arr[i],arr[j]);
              j--;
          }
       }


    }
};

