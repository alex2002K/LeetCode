class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int> result(2 * n); 
        int index = 0;
        
        for (int i = 0; i < n; ++i) {
            result[index++] = nums[i];       
            result[index++] = nums[i + n];    
        }
        
        return result; 
    }
};
