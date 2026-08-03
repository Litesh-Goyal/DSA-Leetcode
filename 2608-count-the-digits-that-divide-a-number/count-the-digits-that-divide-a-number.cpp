class Solution { 
public: 
    int countDigits(int num) { 
        int n = num; 
        int c = 0; 
        
        while (n > 0) 
        { 
            int digit = n % 10;
            if (digit != 0 && num % digit == 0) {
                c++;
            } 
            n = n / 10; 
        } 
        return c; 
    } 
};
