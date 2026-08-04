class Solution {
public:
    string h(string s,string t)
    {
        string x;
        for(int i=0;i<min(s.length(),t.length());i++)
        {
            if(s[i]!=t[i]){break;}
            x.push_back(s[i]);
        }
        return x;
    }
    string longestCommonPrefix(vector<string>& strs)
    {
        int n=strs.size();
        if(n==0){return "";}
        string s=strs[0];
        for(int i=1;i<n;i++)
        {
            s=h(s,strs[i]);
        }
        return s;
        
    }
};