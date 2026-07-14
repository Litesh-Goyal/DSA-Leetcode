class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n=nums.size();
        if(target<=nums[0]){return 0;}
        if(target>nums[n-1]){return n;}
        int st=0;
        int end=n-1;
        while(st<end)
        {
            int mid= st+end+1 /2;
            if(target==nums[mid]){return mid;}
            if(target<nums[mid])
            {
                end=mid-1;
            }
            if(target>nums[mid])
            {
                st=mid+1;
            }
        }
        st=0;
        end=n-1;
        while(st<end)
        {
            int mid=st+end+1 /2;
            if((end-mid == 1 || end-mid==0) && nums[mid]<target){return mid+1;}
            if((mid-st == 1 || st-mid==0) && nums[st]<target){return st+1;}
            if(target<nums[mid])
            {
                end=mid-1;
            }
            if(target>nums[mid])
            {
                st=mid+1;
            }
        }
        return 0;
    }
};