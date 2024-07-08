class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        // Get the first two points
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int x1 = coordinates[1][0], y1 = coordinates[1][1];

        // Calculate the slope (dy/dx) using the first two points
        int dx = x1 - x0;
        int dy = y1 - y0;

        // Check if all other points are on the same line
        for (int i = 2; i < coordinates.size(); ++i) {
            int x = coordinates[i][0], y = coordinates[i][1];
            // If the cross product of the vectors (x1 - x0, y1 - y0) and (x - x0, y - y0) is not zero,
            // then the points are not collinear
            if ((x - x0) * dy != (y - y0) * dx) {
                return false;
            }
        }
        return true;
    }
};
