#include <unordered_map>
#include <unordered_set>
#include <string>

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> count;
        
        // Count occurrences of each character
        for (char c : s) {
            count[c]++;
        }
        
        // Use a set to check if all counts are the same
        unordered_set<int> occurrences;
        for (const auto& entry : count) {
            occurrences.insert(entry.second);
        }
        
        // If all counts are the same, there should be only one unique count
        return occurrences.size() == 1;
    }
};
