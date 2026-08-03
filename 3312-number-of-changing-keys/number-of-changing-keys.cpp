class Solution {
public:
    int countKeyChanges(string s)
    {
        string a;
        for(int i=0;i<s.length();i++)
        {
            a.push_back(tolower(s[i]));
        }
        int c=0;
        for(int i=0;i<a.length()-1;i++)
        {
            if(a[i]!=a[i+1]){c++;}
        }
        return c;
        
    }
};