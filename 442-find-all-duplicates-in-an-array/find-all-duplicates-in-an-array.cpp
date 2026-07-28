class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i])==0)
            {
                mp[nums[i]]=1;
            }
            else
            {
                if(mp[nums[i]]==1){ans.push_back(nums[i]);}
                mp[nums[i]]+=1;
            }
        }
        return ans;
    }
};