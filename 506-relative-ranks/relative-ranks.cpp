class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i;
        }
        sort(nums.begin(), nums.end(), greater<int>());
        vector<string> ans(n);
        for(int i=0;i<n;i++)
        {
            if(i==0){ans[mp[nums[i]]] = "Gold Medal";}
            else if(i==1){ans[mp[nums[i]]]="Silver Medal";}
            else if(i==2){ans[mp[nums[i]]]="Bronze Medal";}
            else{ans[mp[nums[i]]]=to_string(i+1);}
        }
        return ans;
    }
};