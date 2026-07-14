class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int m_l=INT_MAX;
        int l=0;
        int curr=0;
        int i;
        for(i=0;i<nums.size();i++)
        {
            curr+=nums[i];
            while(curr>=target)
            {
                curr-= nums[l];
                if( m_l>(i-l+1))
                {
                    m_l=i-l+1;
                }
                l++;
            }
            
        }
        return (m_l == INT_MAX ) ? 0 : m_l;        
    }
};