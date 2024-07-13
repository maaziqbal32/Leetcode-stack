#include <unordered_map>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (mp.count(nums[i])) {
                if (abs(i - mp[nums[i]]) <= k) return true;
            }
            mp[nums[i]] = i;
        }
        return false; // Missing return statement for the case when no duplicate is found within the distance k
    }
};
