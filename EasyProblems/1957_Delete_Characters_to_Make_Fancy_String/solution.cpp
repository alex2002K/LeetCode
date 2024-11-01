class Solution {
public:
    string makeFancyString(string s) 
    {
        string answ = "";
        int count = 1; // To keep track of consecutive identical characters

        for (int i = 0; i < s.size(); ++i) 
        {
            // Check if this character is the same as the previous one
            if (i > 0 && s[i] == s[i - 1]) 
            {
                count++;
            } 
            else 
            {
                count = 1; // Reset count if current char is different
            }
            
            // Only add to answ if count is 2 or less
            if (count <= 2) 
            {
                answ += s[i];
            }
        }
        
        return answ;
    }
};
