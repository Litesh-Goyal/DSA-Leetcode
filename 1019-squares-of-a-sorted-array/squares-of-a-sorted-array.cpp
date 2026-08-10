class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> v(n);
        int l=0;
        int r=n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(abs(nums[l])>abs(nums[r]))
            {
                v[i]=nums[l] * nums[l];
                l++;
            }
            else
            {
                v[i]=nums[r] * nums[r];
                r--;
            }
        }
        return v;
    }
};