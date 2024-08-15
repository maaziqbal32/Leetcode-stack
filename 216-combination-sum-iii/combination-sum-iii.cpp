#include <vector>
using namespace std;

class Solution {
public:   
    vector<vector<int>> ans;

    void help(int i, vector<int>& C, int k, int t, vector<int> sol) {
        // Base case: If the combination size is k and sum is 0, add the solution to results
        if (t == 0 && sol.size() == k) {
            ans.push_back(sol);
            return;
        }

        // If the sum exceeds t or the combination size exceeds k, return
        if (t < 0 || sol.size() > k || i >= C.size()) {
            return;
        }

        // Skip the ith element
        help(i + 1, C, k, t, sol);

        // Pick the ith element
        sol.push_back(C[i]);
        help(i + 1, C, k, t - C[i], sol);

        // Backtracking
        sol.pop_back();
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> C = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        help(0, C, k, n, {});
        return ans;
    }
};
