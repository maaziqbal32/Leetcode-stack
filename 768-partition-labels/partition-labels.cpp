class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> last(26, 0);
        vector<int> result;

        // Step 1: Find the last occurrence of each character
        for (int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
        }

        // Step 2: Traverse the string and partition
        int start = 0, end = 0;
        for (int i = 0; i < s.size(); i++) {
            end = max(end, last[s[i] - 'a']); // Extend the current partition to include the last occurrence of the character
            if (i == end) { // If we have reached the end of the partition
                result.push_back(end - start + 1); // Add the size of the current partition
                start = i + 1; // Start a new partition
            }
        }

        return result;
    }
};
