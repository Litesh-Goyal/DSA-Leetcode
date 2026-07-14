class Solution {
public:
    int pivotInteger(int n)
    {
        int s=(n*(n+1))/2;
        int a=0;
        for(int i=1;i<=n;i++)
        {
            if(a == s-i){return i;}
            a=a+i;
            s=s-i;
        }
        return -1;
        
    }
};