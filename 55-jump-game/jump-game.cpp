class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0; // This will store the furthest we can reach
        
        for (int i = 0; i < nums.size(); ++i) {
            if (i > maxReach) {
                // If current index is greater than the maximum reachable index, return false
                return false;
            }
            // Update maxReach to the furthest we can go from the current index
            maxReach = max(maxReach, i + nums[i]);
        }
        return true; // If we traverse the loop without returning false, we can reach the last index
    }
};
