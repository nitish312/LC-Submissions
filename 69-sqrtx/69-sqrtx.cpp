class Solution {
public:
    
    int getSqrt(int x){
        
        int ans = 0;
        int start = 0, end = x;
        long long int mid;
        while(start <= end){
            mid = start + (end - start) / 2;
            long long int sq = mid * mid;
            if(sq == x) return mid;
            else if(sq < x){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        
        return ans;
    }
    
    int mySqrt(int x) {
        
        if(x==0 || x==1) return x;
        return getSqrt(x);
    }
};