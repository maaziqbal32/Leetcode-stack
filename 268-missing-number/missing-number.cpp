class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>originalset(nums.begin(),nums.end());
        for(int number=0;number<=nums.size();number++){
            if(originalset.find(number) == originalset.end()){
                return number;
            }
        }
        return -1;
    }
};