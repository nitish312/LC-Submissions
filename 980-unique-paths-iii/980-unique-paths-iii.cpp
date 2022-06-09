class Solution {
public:
    
    int dfs(vector<vector<int>> &grid, int x, int y, int zeroCount){
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(x < 0 || y < 0 || x >= n || y >= m || grid[x][y] == -1) return 0;
                
        if(grid[x][y] == 2) 
            return (zeroCount == -1) ? 1 : 0;
        
        grid[x][y] = -1;
        zeroCount--;
        
        int totalPaths = dfs(grid, x+1, y, zeroCount) + 
                         dfs(grid, x, y+1, zeroCount) +
                         dfs(grid, x-1, y, zeroCount) +
                         dfs(grid, x, y-1, zeroCount);
        
        grid[x][y] = 0;
        zeroCount++;
        
        return totalPaths;        
    }
    
    int uniquePathsIII(vector<vector<int>>& grid){
        
        int n = grid.size();
        int m = grid[0].size();
        
        int sx = 0, sy = 0; // starting block's (x, y) co-ordinates
        int zeroCount = 0;
        
        for(int i=0; i<n; ++i){
            
            for(int j=0; j<m; ++j){
                
                if(grid[i][j] == 0) zeroCount++;
                else if(grid[i][j] == 1) sx = i, sy = j;
            }
        }
        
        return dfs(grid, sx, sy, zeroCount);
    }
    
};