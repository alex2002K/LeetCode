class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        int count = 0;
        for(int i = 0; i < words.size(); i++)
        {

        bool isAllowed = true;
            
            for(int j = 0; j < words[i].size(); j++)
            {
                
                if(allowed.find(words[i][j]) == -1){
                    isAllowed = false; 
                    break;
                }
            }
            
            if(isAllowed) count++;
        }
        
        return count;
    }
};
