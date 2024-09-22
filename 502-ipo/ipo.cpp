class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        // Create a vector of pairs to store capital and profit together
        vector<pair<int, int>> projects;
        for (int i = 0; i < profits.size(); i++) {
            projects.push_back({capital[i], profits[i]});
        }

        // Sort projects based on the required capital
        sort(projects.begin(), projects.end());

        // Max-heap to store the profits of the projects we can afford to start
        priority_queue<int> maxProfitHeap;

        int projectIndex = 0;
        while (k--) {
            // Push all projects that we can afford with the current capital into the max-heap
            while (projectIndex < projects.size() && projects[projectIndex].first <= w) {
                maxProfitHeap.push(projects[projectIndex].second);
                projectIndex++;
            }

            // If no projects can be started, break out of the loop
            if (maxProfitHeap.empty()) break;

            // Take the project with the maximum profit and increase the current capital
            w += maxProfitHeap.top();
            maxProfitHeap.pop();
        }

        return w;
    }
};
