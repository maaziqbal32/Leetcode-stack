class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // find the mid element which is our answer 
        return nums[(int)nums.size()/2];
    }
};