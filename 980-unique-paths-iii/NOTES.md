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