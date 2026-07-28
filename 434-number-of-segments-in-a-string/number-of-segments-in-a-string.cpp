class Solution {
public:
    int countSegments(string s) 
    {
        if(s.length()==0){return 0;}
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                c++;
                while(i<s.length() && s[i]!=' '){i++;}
            }
        }
        return c;
    }
};