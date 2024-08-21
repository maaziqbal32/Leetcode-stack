class Solution {
public:
    int target;

    bool check(vector<int>& v, int mask, int currentSum, int k, vector<int>& dp) {
        if(k == 0) return true;
        if(dp[mask] != -1) return dp[mask];
        for (int i = 0; i < v.size(); i++) {
            if(mask & (1 << i)||v[i] > currentSum) continue;
            int newMask = mask | (1 << i);
            if(v[i] == currentSum && check(v, newMask, target, k - 1, dp)) return dp[mask] = 1;
            else if(check(v, newMask, currentSum - v[i], k, dp)) return dp[mask] = 1;
        }
        return dp[mask]=0;
    }

    bool canPartitionKSubsets(vector<int>& v, int k) {
        ios::sync_with_stdio(0); cin.tie(0);
        int sum = accumulate(v.begin(), v.end(), 0);
        if(sum % k != 0) return false;
        target = sum / k;
        vector<int> dp(1 << v.size(), -1);
        return check(v, 0, target, k, dp);
    }
};
