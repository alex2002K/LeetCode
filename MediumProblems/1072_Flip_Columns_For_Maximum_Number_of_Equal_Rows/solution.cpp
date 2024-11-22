class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) 
    {
        unordered_map<string, int> patternCount;
        int maxRows = 0;
        for (const auto& row : matrix) {
            string pattern;
           
            for (int j = 0; j < row.size(); ++j) {
                pattern += (row[j] == row[0]) ? '0' : '1';
            }
            
            patternCount[pattern]++;
            maxRows = max(maxRows, patternCount[pattern]);
        }

        return maxRows;
    }
};
