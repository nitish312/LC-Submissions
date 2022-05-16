class Solution {
public:
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid){
        
        int dir[8][2] = {{-1,0}, {0,1}, {1,0}, {0,-1}, {-1,-1}, {-1,1}, {1,1},                                  {1,-1}};

        queue<pair<int,int>> q;

        if(grid[0][0] != 0) return -1;

        q.emplace(0,0);
        int m = grid.size(), n = grid[0].size();
        grid[0][0] = 1;

        while(q.size()){

            auto [r,c]=q.front();q.pop();
            if(r==m-1&&c==n-1)return grid[r][c];

            for(auto& d:dir){

                int rr=r+d[0],cc=c+d[1];
                if(rr>=0&&rr<m&&cc>=0&&cc<n&&grid[rr][cc]==0){

                    grid[rr][cc]=grid[r][c]+1;
                    q.emplace(rr,cc);
                }
            }
        }

        return -1;
    }
};