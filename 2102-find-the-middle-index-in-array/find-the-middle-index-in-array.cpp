class Solution {
public:
    int findMiddleIndex(vector<int>& nums)
    {
        int a=0;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        for(int i=0;i<nums.size();i++)
        {
            if(a == s-nums[i])
            {
                return i;
            }
            a=a+nums[i];
            s=s-nums[i];
        }
        return -1;
        
    }
};