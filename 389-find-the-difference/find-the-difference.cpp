class Solution {
public:
    char findTheDifference(string s, string t) 
    {

        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            if(mp.count(s[i])==0)
            {
                mp[s[i]]=1;
            }
            else{mp[s[i]]+=1;}
        }
        for(int i=0;i<t.length();i++)
        {
            if(mp.count(t[i])==0)
            {
                return t[i];
            }
            else
            {
                if(mp[t[i]]==0){return t[i];}
                else{mp[t[i]]-=1;}
            }
        }
        return ' ';
    }
};