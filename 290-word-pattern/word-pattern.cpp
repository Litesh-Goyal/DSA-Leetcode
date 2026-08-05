class Solution {
public:
    bool wordPattern(string p, string s)
    {
        vector<string> v;
        auto words = s | views::split(' ');
        for (auto word : words) 
        {
            v.push_back(string(word.begin(), word.end()));
        }
        if(v.size()!=p.length()){return false;}
        map<char,string> mp;
        unordered_map<string,int> maa;
        for(int i=0;i<p.length();i++)
        {
            if(mp.count(p[i])==0)
            {
                if(maa.count(v[i])==0){mp[p[i]]=v[i]; maa[v[i]]=1;}
                else{return false;}\
            }
            else
            {
                if(v[i] != mp[p[i]]){return false;}
            }
        }
        return true;
    }
};