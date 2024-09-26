#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // Base case: If there are no intervals, no need to remove anything
        if (intervals.empty()) return 0;
        
        // Sort intervals based on their end times
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];  // Compare based on the second value (end time)
        });
        
        int count = 0;  // To keep track of the number of intervals we remove
        int prevEnd = intervals[0][1];  // Set the end of the first interval as the reference
        
        // Iterate through the intervals starting from the second one
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < prevEnd) {
                // If the current interval's start is before the previous interval's end, it overlaps
                count++;  // So we need to remove this interval
            } else {
                // Otherwise, we update the reference to the end of the current interval
                prevEnd = intervals[i][1];
            }
        }
        
        return count;  // Return the number of intervals we need to remove
    }
};
