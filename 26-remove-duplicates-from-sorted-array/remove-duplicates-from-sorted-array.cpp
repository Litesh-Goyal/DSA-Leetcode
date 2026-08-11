class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        if(nums.size()==1){return nums.size();}
        int c=0;
        int k=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1] && k==0)
            {
                k=i;
            }
            if(nums[i]!=nums[i-1] && k<i && k!=0)
            {
                nums[k]=nums[i];
                k++;
            }
            if(nums[i]!=nums[i-1]){c++;}
        }
        if(++c==nums.size()){return c;}
        return k;
    }
};