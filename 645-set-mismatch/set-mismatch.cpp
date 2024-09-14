class Solution {
public:
    // time/space: O(nlogn)/O(logn)
    vector<int> findErrorNums(vector<int>& nums) {
        // sort the array
        int n = nums.size();
        sort(nums.begin(), nums.end());

        // find the repeated number
        int repeated;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] == nums[i]) {
                repeated = nums[i];
                break;
            }
        }

        // find the lost number
        int lost;
        if (nums.front() != 1) lost = 1;
        else if (nums.back() != n) lost = n;
        else {
            // the lost number is [2, n)
            int prev = 0;
            for (auto& num : nums) {
                if ((prev + 1) < num) {
                    lost = prev + 1;
                    break;
                }
                prev = num;
            }
        }

        return vector<int>({repeated, lost});
    }
};