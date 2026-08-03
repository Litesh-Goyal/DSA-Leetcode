class Solution {
public:
    int vb(vector<int> v)
    {
        int s=0;
        for(int i=0;i<v.size();i++)
        {
            s+=v[i];
        }
        return s;
    }
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int m=INT_MIN;
        for(int i=0;i<accounts.size();i++)
        {
            if(vb(accounts[i])>=m){m=vb(accounts[i]);}
        }
        return m;
    }
};