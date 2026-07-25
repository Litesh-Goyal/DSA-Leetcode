class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>ans;
        unordered_map<int,int> mp;
        int n1=nums1.size(),n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            if(mp.count(nums1[i])==0){mp[nums1[i]]=1;}        
        }
        for(int i=0;i<n2;i++)
        {
            if(mp.count(nums2[i])==0){continue;}
            else
            {
                if(mp[nums2[i]]!=-1)
                {
                    mp[nums2[i]]=-1;
                    ans.push_back(nums2[i]);
                }
                continue;
            }
        }
        return ans;
    }
};