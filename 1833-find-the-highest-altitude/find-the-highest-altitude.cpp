class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int ma=0;
        int a=0;
        for(int i=0;i<gain.size();i++)
        {
            a+=gain[i];
            ma=max(ma,a);
        }
        return ma;
        
    }
};