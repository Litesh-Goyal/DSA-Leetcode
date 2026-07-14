class Solution {
public:
    bool scoreBalance(string s) 
    {
        
        int n=s.length();
        if(n<2) return false;
        int su=0;
        for(int i=0;i<n;i++)
        {
            su+=int(s[i]) - 96;
        }
        int a=0;
        for(int i=0;i<n-1;i++)
        {
            a+=int(s[i]) - 96;
            su=su- int(s[i]) +96;
            if(a==su){return true;}
            
        }
        return false;
    }
};