class Solution {
public:
    int pivotIndex(vector<int>& nums)
    {
        int pre=0;
        int suf=0;
        for(int i=0;i<nums.size();i++)
        {
            suf+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(suf-nums[i]==pre){return i;}
            suf=suf-nums[i];
            pre=pre+nums[i];
        }
        return -1;
        
        
    }
};