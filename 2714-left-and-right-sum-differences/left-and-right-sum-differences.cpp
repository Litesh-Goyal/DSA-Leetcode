class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums)
    {
        vector<int> ans(nums.size(),0);
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
        }
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=max(a,s-nums[i])-min(a,s-nums[i]);
            a=a+nums[i];
            s=s-nums[i];
        }
        return ans;
    }
};