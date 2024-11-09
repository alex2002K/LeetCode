class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) 
    {
        // Check each possible 2x2 square in the 3x3 grid
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                // Check if we can make the 2x2 square uniform by changing at most one cell
                if (canFormUniformSquare(grid[i][j], grid[i+1][j], grid[i][j+1], grid[i+1][j+1])) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    bool canFormUniformSquare(char a, char b, char c, char d)
    {
        // Count the number of 'B's and 'W's
        int countB = (a == 'B') + (b == 'B') + (c == 'B') + (d == 'B');
        int countW = 4 - countB; // Since it's a 2x2 grid, we can deduce countW from countB
        
        // If there are 3 or 4 of the same color, we can make a uniform 2x2 square
        return countB >= 3 || countW >= 3;
    }
};
