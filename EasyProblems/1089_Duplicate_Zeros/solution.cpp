class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        std::vector<int> result;

        for(int i = 0; i < arr.size(); i++)
        {
            result.push_back(arr[i]);  
            
            if(arr[i] == 0) 
            {
                result.push_back(0);
            }
        }

        for(int i = 0; i < arr.size(); i++)
        {
            arr[i] = result[i];
        }
    }
};
