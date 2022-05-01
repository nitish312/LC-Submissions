class Solution {
public:
    int arrangeCoins(int n) {
        
        int start = 1, end = n, ans;
		long mid, coinsNeeded;
        while(start <= end) {
            mid = start + ((end - start) >> 1);  // finding mid of range [l, r]
            coinsNeeded = (mid * (mid + 1)) >> 1;  // coins needed for 'mid' number of row
            if(coinsNeeded <= n){
                start = mid + 1;
                ans = mid;            // if available coins are sufficient
            }    
            else end = mid - 1;  // coins insufficient, eliminate the half greater than mid
        }
        
        return ans;
    }
};