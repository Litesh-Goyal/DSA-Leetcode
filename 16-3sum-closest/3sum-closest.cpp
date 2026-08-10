class Solution {
public:
    int threeSumClosest(vector<int>& nums, int t) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=nums[0] + nums[1] + nums[2];
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(t-sum)<=abs(t-ans))
                {
                    ans=sum;
                }
                if(sum<t){j++;}
                else{k--;}
            }
        }
        return ans;
    }
};