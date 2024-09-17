class Solution {
public:
    std::vector<std::string> uncommonFromSentences(std::string s1, std::string s2) 
    {
        std::vector<std::string> s11 = sliceString(s1);
        std::vector<std::string> s22 = sliceString(s2);     
        
        return uncommonElements(s11, s22);
    }

    std::vector<std::string> sliceString(std::string s)
    {
        std::string word;
        std::vector<std::string> result;
        
        for(int i = 0; i <= s.size(); i++)
        {
            if(i == s.size() || s[i] == ' ')
            {
                if(!word.empty())
                {
                    result.push_back(word);
                    word = "";
                }
            }
            else
            {
                word += s[i];
            } 
        }
        return result;
    }

    std::vector<std::string> uncommonElements(std::vector<std::string> &v1, std::vector<std::string> &v2)
    {
        std::vector<std::string> result;
        std::unordered_map<std::string, int> wordCount;
        
        for (const auto &word : v1) 
        {
            wordCount[word]++;
        }
        for (const auto &word : v2)
        {
            wordCount[word]++;
        }
        
        for (auto &pair : wordCount)
        {
            if (pair.second == 1)
            {
                result.push_back(pair.first);
            }
        }
        
        return result;
    }
};
