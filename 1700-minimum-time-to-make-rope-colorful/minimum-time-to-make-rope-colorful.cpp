#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    int minCost(std::string colors, std::vector<int>& neededTime) {
        int res = 0;  // Initialize the result to store the minimum cost
        int n = colors.size();  // Get the size of the colors string

        for (int i = 1; i < n; ++i) {  // Start from the second balloon and iterate through the end
            if (colors[i] == colors[i - 1]) {  // Check if the current balloon has the same color as the previous one
                // Add the minimum of the two times (remove the cheaper balloon)
                res += std::min(neededTime[i], neededTime[i - 1]);
                
                // Keep the higher cost balloon to potentially compare with the next balloon
                neededTime[i] = std::max(neededTime[i], neededTime[i - 1]);
            }
        }
        return res;  // Return the accumulated minimum cost
    }
};