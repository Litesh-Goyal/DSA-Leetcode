class Solution {
public:
    int calPoints(vector<string>& op) 
    {
        vector<int> v;
        for(int i=0;i<op.size();i++)
        {
            if(isdigit(op[i][op[i].size()-1])){v.push_back(stoi(op[i]));}
            else
            {
                if(op[i]=="C"){v.pop_back();}
                else if(op[i]=="D"){v.push_back(v[v.size()-1]*2);}
                else if(op[i]=="+"){v.push_back(v[v.size()-1]+v[v.size()-2]);}
            }
        }
        int z=0;
        for(int i=0;i<v.size();i++)
        {
            z+=v[i];
        }
        return z;
        
    }
};