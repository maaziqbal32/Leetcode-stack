class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
        
        int n = nums.size();
        int mid = (n - 1) / 2;  // Middle index for the smaller half
        
        // Fill odd indices with larger values from the end of the sorted array
        int largeIdx = n - 1;
        // Fill even indices with smaller values from the middle of the sorted array
        int smallIdx = mid;
        
        // Traverse the array and place the smaller and larger elements alternately
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                // Place smaller elements at even indices
                nums[i] = sorted[smallIdx--];
            } else {
                // Place larger elements at odd indices
                nums[i] = sorted[largeIdx--];
            }
        }
    }
};
