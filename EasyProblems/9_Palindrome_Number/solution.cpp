class Solution {
public:
      bool isPalindrome(int x) 
      {
        if(x < 0) return false;
        
		
        long int num = x, backward = 0, reminder = 0;
        
        while(x != 0)
        {
            reminder = x%10;
            backward = backward*10 + reminder;
            x /= 10;
        }
        
		
        if(num == backward) return true;  
        else return false;
    }
};
