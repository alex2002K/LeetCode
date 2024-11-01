class Solution {
public:
    bool isThree(int n) 
    {
        return divisors(n) == 3;    
    }

    int divisors(int n) 
    {
        int count = 0;

        for (int i = 1; i <= n; i++) 
        {
            if (n % i == 0) 
            {
                count++;
            }
        }
        return count;
    }
};
