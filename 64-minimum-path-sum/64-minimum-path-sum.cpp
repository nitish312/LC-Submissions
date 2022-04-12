class Solution {
public:
    // 1. Recursion Approach - gives TLE
//     int minCost(vector<vector<int>>& grid, int m, int n){
        
//         if(m < 0 || n < 0){
//             return INT_MAX;
//         }
//         else if(m == 0 && n == 0){
//             return grid[m][n];
//         }
        
//         return grid[m][n] + min( minCost(grid, m-1, n), minCost(grid, m, n-1) );
//     }
    
//     int minPathSum(vector<vector<int>>& grid){
        
//         int m = grid.size();
//         int n = grid[0].size();
        
//         return minCost(grid, m-1, n-1);
//     }
    
    // 2. DP
    
    int minPathSum(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> dp(m, vector<int>(n, grid[0][0]));
        
        for(int i=1; i<m; i++){
            dp[i][0] = dp[i-1][0] + grid[i][0];
        }
        for(int j=1; j<n; j++){
            dp[0][j] = dp[0][j-1] + grid[0][j];
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                dp[i][j] = grid[i][j] + min(dp[i-1][j], dp[i][j-1]);
            }
        }
        
        return dp[m-1][n-1];
    }
};