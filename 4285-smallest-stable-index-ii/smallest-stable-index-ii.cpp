class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k)
    {
        vector<int> ma(nums.size(),INT_MIN);
        vector<int> mi(nums.size(),INT_MAX);
        mi[nums.size()-1]=nums[nums.size()-1];
        ma[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            ma[i]=max(ma[i-1],nums[i]);
        }
        for(int i=nums.size()-2;i>=0;i--)
        {
            mi[i]=min(mi[i+1],nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(ma[i]-mi[i] <=k){return i;}
        }
        return -1;
        
    }
};