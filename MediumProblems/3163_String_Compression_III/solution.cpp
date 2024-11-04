class Solution {
public:
    std::string compressedString(std::string word) {
        std::string comp = "";
        int count = 1;

        for (int i = 0; i < word.size(); i++) {
            if (i < word.size() - 1 && word[i] == word[i + 1] && count < 9) {
                count++;
            } else {
                comp += std::to_string(count);
                comp += word[i];
            
                count = 1;
            }
        }

        return comp;
    }
};
