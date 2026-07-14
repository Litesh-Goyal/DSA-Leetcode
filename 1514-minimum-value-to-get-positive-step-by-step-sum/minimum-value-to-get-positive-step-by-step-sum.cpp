class Solution {
public:
    int minStartValue(vector<int>& nums)
    {
        int m=1;
        int a=0;
        for(int i=0;i<nums.size();i++)
        {
            a=a+nums[i];
            if(a<m){m=a;}
        }
        return m<0?(m*(-1)+1):1;
    }
};