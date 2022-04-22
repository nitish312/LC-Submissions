class Solution {
public:
    // DP - Recursion to memoization
    int dp[20];
    
    int numTrees(int n) {
        
        if(dp[n]) return dp[n];
        
        if(n <= 1) return 1;
        
        for(int i=1; i<=n; i++) 
            dp[n] += numTrees(i-1) * numTrees(n-i);
        
        return dp[n];
    }
};