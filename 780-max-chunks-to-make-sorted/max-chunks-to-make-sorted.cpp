class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxVal = 0;
        int chunks = 0;
        
        for (int i = 0; i < arr.size(); ++i) {
            // Update the maximum value encountered so far
            maxVal = max(maxVal, arr[i]);
            
            // If the max value so far equals the current index, we can form a chunk
            if (maxVal == i) {
                chunks++;
            }
        }
        
        return chunks;
    }
};
