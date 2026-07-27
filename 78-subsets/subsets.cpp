class Solution {
public:
     void all_SS(int i,vector<int>& subset,vector<int> nums,vector<vector<int>>& ans)
    {
        int n=nums.size();
        if(n==i){ans.push_back(subset); return;}
        subset.push_back(nums[i]);
        all_SS(i+1,subset,nums,ans);
        subset.pop_back();
        all_SS(i+1,subset,nums,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> ans;
        vector<int> subset;
        all_SS(0,subset,nums,ans);
        return ans;
    }
};