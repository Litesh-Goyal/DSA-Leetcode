class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(num==1 || num==4){return true;}
        if(num<9){return false;}
        long long l=0;
        long long r=num/2;
        long long mid;
        while(l<=r)
        {
            mid= l+ (r-l)/2;

            if(mid * mid == num){return true;}
            else if(mid*mid > num){r=mid-1;}
            else{l=mid+1;}
        }
        return false;
    }
};