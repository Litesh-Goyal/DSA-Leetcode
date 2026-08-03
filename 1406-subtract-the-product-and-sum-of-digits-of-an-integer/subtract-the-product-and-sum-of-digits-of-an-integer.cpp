class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int s=0;
        int m=1;
        while(n>0)
        {
            m=m* (n%10);
            s=s+ n%10;
            n=n/10;
        }
        return m-s;
    }
};