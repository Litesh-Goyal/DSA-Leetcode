class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
    
        vector<int> ans(2,-1);
        int st=0;
        int end=nums.size()-1;
        int mid;
        int n=nums.size();
        if(n==0){return ans;}
        while(st<=end)
        {
            mid=st + (end-st)/2;
            if(nums[mid]==target)
            {
                if(mid!=0 && nums[mid-1]==nums[mid])
                {
                    int i=mid;

                    while(i>0 && nums[i]==nums[i-1])
                    {
                        i--;
                    }
                    if(nums[0]==target){ans[0]=0;}
                    else{ans[0]=i;}
                    break;
                }
                ans[0]=mid;
                break;
            }
            else if(target<nums[mid]){end=mid-1;}
            else{st=mid+1;}
        }
        st=0;
        end=nums.size()-1;
        mid;
        n=nums.size();
        while(st<=end)
        {
            mid=st + (end-st)/2;
            if(nums[mid]==target)
            {
                if(mid<n-1 && nums[mid+1]==nums[mid])
                {
                    int i=mid;

                    while(i<n-1 && nums[i]==nums[i+1])
                    {
                        i++;
                    }
                    if(nums[n-1]==target){ans[1]=n-1;}
                    else{ans[1]=i;}
                    break;
                }
                ans[1]=mid;
                break;
            }
            else if(target<nums[mid]){end=mid-1;}
            else{st=mid+1;}
        }
        if((ans[0]==-1 || ans[1]==-1) && ans[0]!=ans[1])
        {
            (ans[0]==-1) ? (ans[0]=ans[1]):(ans[1]=ans[0]);
        }
        return ans;
        
    }
};
