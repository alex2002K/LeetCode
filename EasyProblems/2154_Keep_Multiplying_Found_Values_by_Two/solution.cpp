class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        if(isThere(nums, original))
        {
	    original *= 2;
            return findFinalValue(nums, original);
        }

        return original;
        
    }

    bool isThere(vector<int>& nums, int original)
    {
        for(auto &num : nums)
        {
            if(num == original)
            {
                return true;
            }
        }
        return false;
    }
};
