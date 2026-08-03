class Solution {
public:
    int ds(int n)
    {
        int s=0;
        while(n>0)
        {
            s=s+ n%10 ;
            n=n/10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) 
    {
        int s=0;
        int ss=0;
        for(int i=0;i<nums.size();i++)
        {
            s=s+nums[i];
            ss=ss+ds(nums[i]);
        }
        return max(s,ss)-min(ss,s);
        
    }
};