class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumAlice = accumulate(aliceSizes.begin(), aliceSizes.end(), 0); // Total sum of Alice's candies
        int sumBob = accumulate(bobSizes.begin(), bobSizes.end(), 0);       // Total sum of Bob's candies
        
        // The difference we need to account for
        int diff = (sumAlice - sumBob) / 2;
        
        // Use a set for Bob's candies to quickly find the corresponding candy
        unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());
        
        // Find the pair of candies (x, y) such that sumAlice - x + y == sumBob - y + x
        for (int x : aliceSizes) {
            int y = x - diff; // This is the candy Bob needs to give Alice
            if (bobSet.find(y) != bobSet.end()) {
                return {x, y}; // Return the pair {x, y}
            }
        }
        
        return {}; // In case no valid pair is found (although there should always be a solution)
    }
};
