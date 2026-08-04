class Solution {
public:
    int strStr(string ha, string ne) 
    {
        int hs=ha.size();
        int ns=ne.size();
        if(hs<ns){return -1;}
        if(hs==ns)
        {
            for(int i=0;i<hs;i++)
            {
                if(ha[i]!=ne[i]){return -1;}
            }
            return 0;
        }
        for(int i=0;i<hs-ns+1;i++)
        {
            if(ha[i]==ne[0])
            {
                int c=1;
                int x=0;
                for(int j=i+1;j<i+ns;j++)
                {
                    if(ha[j]!=ne[c++]){x++;break;}
                }
                if(x==0){return i;}
            }
        }
        return -1;
        
    }
};