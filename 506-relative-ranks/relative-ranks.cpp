class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        // Vector to store pairs of {score, index}
        vector<pair<int, int>> v(n);
        
        // Assigning scores and their original indices to the vector
        for (int i = 0; i < n; i++) {
            v[i].first = score[i];  // Assign score to the first part of the pair
            v[i].second = i;        // Assign original index to the second part of the pair
        }

        // Sorting in descending order of scores
        sort(v.rbegin(), v.rend());

        vector<string> ans(n);
        
        // Assigning medals for the top 3 scores
        if (n >= 1) ans[v[0].second] = "Gold Medal";
        if (n >= 2) ans[v[1].second] = "Silver Medal";
        if (n >= 3) ans[v[2].second] = "Bronze Medal";
        
        // Assigning rankings (4th and below)
        for (int i = 3; i < n; i++) {
            ans[v[i].second] = to_string(i + 1);
        }

        return ans;
    }
};
