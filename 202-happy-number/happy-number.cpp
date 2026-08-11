class Solution {
public:
    int sq(int n)
    {
        int c=0;
        while(n>0)
        {
            c=c+ (n%10)*(n%10);
            n=n/10;
        }
        return c;
    }
    bool isHappy(int n) 
    {
        int slow=n;
        int fast=n;
        while(true)
        {
            slow=sq(slow);
            fast=sq(sq(fast));
            if(slow==fast)
            {
                if(slow==1){return true;}
                else{return false;}
            }
        }
        return false;


        
    }
};