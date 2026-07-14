class Solution {
public:
    int countPartitions(vector<int>& nums)
    {
        
        int ans=0;
        int sum=0;
        int n=nums.size();
        if(n<2){return 0;}
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int a=0;
        for(int i=0;i<n-1;i++)
        {
            a+=nums[i];
            sum=sum-nums[i];
            if( (max(sum,a)-min(sum,a))%2 ==0){ans++;}
        }
        return ans;

        
    }
};