class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Create sets to track the digits seen in each row, column, and 3x3 box
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
        
        // Loop through each cell in the Sudoku board
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                char num = board[i][j];
                
                // If the cell is empty, skip it
                if (num == '.') continue;
                
                // Check if the number has already been seen in the current row
                if (rows[i].count(num)) return false;
                rows[i].insert(num);
                
                // Check if the number has already been seen in the current column
                if (cols[j].count(num)) return false;
                cols[j].insert(num);
                
                // Check if the number has already been seen in the current 3x3 box
                int boxIndex = (i / 3) * 3 + (j / 3);
                if (boxes[boxIndex].count(num)) return false;
                boxes[boxIndex].insert(num);
            }
        }
        
        // If no conflicts are found, the Sudoku board is valid
        return true;
    }
};
