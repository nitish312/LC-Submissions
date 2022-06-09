class Solution {
public:
    
    int totalPaths = 0;
    int totalZeroes = 1;
    
    void dfs(vector<vector<int>>& grid, int x, int y, int count){
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(x < 0 || x >= n || y < 0 || y >= m || grid[x][y] == -1) return;
        
        if(grid[x][y] == 2){
            
            if(totalZeroes == count) totalPaths++; 
            return;
        }
        
        grid[x][y] = -1;
        
        dfs(grid, x + 1, y, count+1);
        dfs(grid, x - 1, y, count+1);
        dfs(grid, x, y + 1, count+1);
        dfs(grid, x, y - 1, count+1);
        
        grid[x][y] = 0;
    }
    
    int uniquePathsIII(vector<vector<int>>& grid){
        
        int n = grid.size();
        int m = grid[0].size();
        
        int sx, sy;
        for(int i=0; i<n; i++) {
            
            for(int j=0; j<m; j++) {
                
                if (grid[i][j] == 0) totalZeroes++;
                else if (grid[i][j] == 1) sx = i, sy = j;
            }
        }
        
        dfs(grid, sx, sy, 0);
        
        return totalPaths;
    }
};