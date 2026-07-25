class Solution {
public:
    bool s_c(int o)
    {
        string str=to_string(o);
        int n=str.length();
        if(n %2 !=0){return false;}
        int l=0,r=0;
        for(int i=0;i<n/2;i++)
        {
            l+=int(str[i]);
            r+=int(str[n-i-1]);
        }
        if(l==r){return true;}
        return false;
    }
    int countSymmetricIntegers(int low, int high)
    {
        int c=0;
        for(int i=low;i<=high;i++)
        {
            if(s_c(i)){c++;}
        }
        return c;
    }
};