class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }

private:
    void backtrack(vector<string>& result, string current, int openCount, int closeCount, int max) {
       
        if (current.size() == max * 2) {
            result.push_back(current);
            return;
        }
        
        if (openCount < max) {
            backtrack(result, current + "(", openCount + 1, closeCount, max);
        }
    
        if (closeCount < openCount) {
            backtrack(result, current + ")", openCount, closeCount + 1, max);
        }
    }
};
