class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;
        unordered_map<char, int> um;
        
        // Initialize the frequency map with the characters from the first word
        for (char c : words[0]) {
            um[c]++;
        }

        // Update the frequency map based on the characters in the rest of the words
        for (int i = 1; i < words.size(); ++i) {
            unordered_map<char, int> tempMap;
            for (char c : words[i]) {
                if (um.find(c) != um.end()) {
                    tempMap[c]++;
                }
            }
            // Update the original map to reflect the minimum count of common characters
            for (auto& pair : um) {
                if (tempMap.find(pair.first) != tempMap.end()) {
                    pair.second = min(pair.second, tempMap[pair.first]);
                } else {
                    pair.second = 0;
                }
            }
        }

        // Collect the common characters into the result vector
        for (auto& pair : um) {
            for (int i = 0; i < pair.second; ++i) {
                res.push_back(string(1, pair.first));
            }
        }

        return res;
    }
};
