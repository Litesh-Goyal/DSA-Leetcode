class Solution {
public:
    int value(char c)
    {
        switch(c)
        {
            case 'M':
                return 1000;
            case 'D':
                return 500;
            case 'C':
                return 100;
            case 'L':
                return 50;
            case 'X':
                return 10;
            case 'V':
                return 5;
            case 'I':
                return 1;

        }
        return 0;
        
    }
    int romanToInt(string s)
    {
        int c1=0;
        int c2=0;
        int c3=0;
        int ans=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='V' && c1==0)
            {
                ans+=value(s[i]);
                c1++;
            }
            else if(s[i]=='I' && c1!=0)
            {
                ans-=1 ;
            }
            else if((s[i]=='C' || s[i]=='L') && c2==0)
            {
                ans+=value(s[i]);
                c2++;
                c1++;
            }
            else if(s[i]=='X' && c2!=0)
            {
                ans-=10;
                c1++;
            }
            else if(s[i]=='X' && c2==0)
            {
                ans+=10;
                c1++;
            }
            else if((s[i]=='M' || s[i]=='D') && c3==0)
            {
                ans+=value(s[i]);
                c3++;
                c2++;
                c1++;
            }
            else if(s[i]=='C' && c3!=0)
            {
                ans-=100;
                c2++;
                c1++;
            }
            else if(s[i]=='C' && c3==0)
            {
                ans+=100;
                c2++;
                c1++;
            }
            else{ans+=value(s[i]);}
        }
        return ans;
    }
};