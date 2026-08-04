class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) 
    {
        int min=INT_MAX;
        int max=INT_MIN;
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=max){max=nums[i];}
            if(nums[i]<=min){min=nums[i];}
            st.insert(nums[i]);
        }
        vector<int> v;
        for(int i=min+1;i<max;i++)
        {
            if(st.count(i)==0){v.push_back(i);}
        }
        return v;
        
    }
};