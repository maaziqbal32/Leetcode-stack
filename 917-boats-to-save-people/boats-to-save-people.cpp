class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // Sort the array to allow pairing of the heaviest and lightest people
        sort(people.begin(), people.end());
        
        int left = 0;  // Pointer to the lightest person
        int right = people.size() - 1;  // Pointer to the heaviest person
        int boats = 0;  // Number of boats needed
        
        // While there are people to be paired
        while (left <= right) {
            // If the lightest and heaviest person can share a boat
            if (people[left] + people[right] <= limit) {
                left++;  // Move the left pointer (lightest person is taken)
            }
            // The heaviest person always gets on the boat
            right--;  // Move the right pointer (heaviest person is taken)
            boats++;  // A boat is used
        }
        
        return boats;
    }
};
