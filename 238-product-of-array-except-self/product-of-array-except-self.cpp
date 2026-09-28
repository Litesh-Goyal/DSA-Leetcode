class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=1;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0){c++;continue;}
            n=n*nums[i];
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(c>1){ans.push_back(0);continue;}
            if(nums[i]==0 && c!=1 && c>0)
            {
                ans.push_back(0);
                continue;
            }
            if(c==1 && nums[i]==0)
            {
                ans.push_back(n);
                continue;
            }
            if(c==1 && nums[i]!=0)
            {
                ans.push_back(0);
                continue;
            }
            ans.push_back(n/nums[i]);

            
        }
        return ans;
        
    }
};