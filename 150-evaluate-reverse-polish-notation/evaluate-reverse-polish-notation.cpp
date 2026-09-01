class Solution {
public:
    int evalRPN(vector<string>& t) 
    {
        stack<int> s;
        int n=t.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]!="+" && t[i]!="-" && t[i]!="*" && t[i]!="/")
            {
                s.push(stoi(t[i]));
            }
            else
            {
                int y=s.top();
                s.pop();
                int x=s.top();
                s.pop();
                if(t[i]=="+"){s.push(x+y);}
                else if(t[i]=="-"){s.push(x-y);}
                else if(t[i]=="*"){s.push(x*y);}
                else if(t[i]=="/"){s.push(x/y);}
            }
        }
        return s.top();
    }
};