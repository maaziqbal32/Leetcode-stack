#include <vector>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) {
        std::vector<int> result;
        std::unordered_map<int, int> um;
        std::unordered_set<int> added; // To track which elements have been added to result
        
        // Populate the map with counts of elements from nums1
        for (const auto& num : nums1) {
            um[num]++;
        }
        
        // Find intersections and ensure no duplicates
        for (const auto& num : nums2) {
            if (um[num] > 0 && added.find(num) == added.end()) {
                result.push_back(num);
                added.insert(num);
            }
        }
        
        return result;
    }
};
