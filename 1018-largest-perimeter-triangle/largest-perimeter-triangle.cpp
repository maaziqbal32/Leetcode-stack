#include <algorithm>  // For std::sort

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        // Sort the sides in non-decreasing order
        sort(nums.begin(), nums.end());
        
        // Start from the largest possible sides
        for (int i = nums.size() - 3; i >= 0; i--) {
            // Check if these sides form a valid triangle
            if (nums[i] + nums[i+1] > nums[i+2]) {
                return nums[i] + nums[i+1] + nums[i+2];
            }
        }
        
        // If no valid triangle found, return 0
        return 0;
    }
};
