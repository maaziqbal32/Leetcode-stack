class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Sort the numbers in ascending order
        sort(nums.begin(), nums.end());
        
        // Remove duplicates
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        
        // Reverse the order to have the maximum numbers first
        reverse(nums.begin(), nums.end());
        
        // Check the size of the modified vector
        if(nums.size() < 3) {
            // If there are less than 3 distinct numbers, return the maximum
            return nums[0];
        }
        
        // Return the third maximum number
        return nums[2];
    }
};
