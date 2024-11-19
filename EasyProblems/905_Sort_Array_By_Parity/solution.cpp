class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int lp = 0;
        int rp = nums.size() - 1;

        while(lp < rp)
        {
            if(is_even(nums[lp]))
            {
                lp++;
            }
            else if(!is_even(nums[rp]))
            {
                rp--;
            }
            else
            {
                std::swap(nums[lp],nums[rp]);
                lp++;
                rp--;
            }
        }
        return nums;
    }

    bool is_even(int num)
    {
        return num % 2 == 0;
    }
   
};
