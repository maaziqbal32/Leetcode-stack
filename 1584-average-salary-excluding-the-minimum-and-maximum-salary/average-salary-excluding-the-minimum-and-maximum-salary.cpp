class Solution {
public:
    double average(vector<int>& salary) {
        if (salary.size() <= 2) return 0; // Handle edge case where there are not enough salaries to exclude min and max
        
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;
        int sum = 0;

        // Find the min and max salary
        for (int i = 0; i < salary.size(); ++i) {
            minSalary = min(minSalary, salary[i]);
            maxSalary = max(maxSalary, salary[i]);
            sum += salary[i];
        }

        // Subtract the min and max salary from the sum
        sum -= minSalary + maxSalary;

        // Compute the average of the remaining salaries
        return static_cast<double>(sum) / (salary.size() - 2);
    }
};
