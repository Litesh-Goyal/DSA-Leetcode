class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        int sl=s.length();
        int tl=t.length();
        if(sl!=tl){return false;}
        unordered_map<char,char> mp;
        for(int i=0;i<sl;i++)
        {
            if(mp.count(s[i])==0)
            {
                for (const auto& pair : mp) 
                {
                    if (pair.second == t[i]) 
                    {
                        return false;
                    }
                }
                mp[s[i]]=t[i];
            }
            else
            {
                if(mp[s[i]]!=t[i]){return false;}
            }
        }
        return true;
        
    }
};