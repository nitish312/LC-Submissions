class Solution {
public:
    // DP - TopDownn (Tabulation)
    
    int numTrees(int n) {
         
        vector<int> dp(20 , 0);
        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2; 
        
        for(int i=3; i<=n; i++){
            
            for(int j=1; j<=i; j++){
                
                int left = j - 1;
                int right = i - (left + 1);
                dp[i] += dp[left] * dp[right];
            }
        }
        
        return dp[n];
    }
};