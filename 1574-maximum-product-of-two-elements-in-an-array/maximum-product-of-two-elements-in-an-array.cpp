class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int n=nums.size();  
      int i=0;
      int j=0;
    for(int &num:nums){
        if(num>i){
            j=i;
            i=num;
        }else{
            j=max(j,num);
        }
    }return (i-1) * (j-1);
    }
};