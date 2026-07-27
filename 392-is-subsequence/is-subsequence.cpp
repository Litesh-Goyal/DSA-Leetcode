class Solution {
public:
    bool isSubsequence(string s, string t)
    {
        if(s.length()>t.length()){return false;}
        int j=0;
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            for(;j<t.length();j++)
            {
                if(s[i]==t[j]){c++;j++;break;}
            }
        }
        if(c==s.length()){return true;}
        return false;;
    }
};