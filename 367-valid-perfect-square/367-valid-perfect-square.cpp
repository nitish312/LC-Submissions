class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long long int i=1,j=num/2,mid;
        if(num==1)
            return true;
        while(i<=j)
        {
            mid=(i+j)/2;
            if(mid*mid==num)
                return true;
            else if(mid*mid<num)
            {
                i=mid+1;
            }
            else
                j=mid-1;
        }
        return false;
    }
};