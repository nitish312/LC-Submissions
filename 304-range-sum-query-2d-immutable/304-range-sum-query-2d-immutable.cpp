class NumMatrix {
public:
    
    vector<vector<int>> sum;
    
    NumMatrix(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        sum = vector<vector<int>> (n + 1, vector<int> (m + 1));
        
        for(int i=1; i<=n; i++)
        {    
            for(int j=1; j<=m; j++)
            {    
                sum[i][j] = sum[i-1][j] + 
                            sum[i][j-1] - 
                            sum[i-1][j-1] + 
                            matrix[i-1][j-1];
            }
        }
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        row1++, col1++, row2++, col2++;
        
        int total = sum[row2][col2];
        
        int extra = ( (col1 != 0) ? sum[row2][col1-1] : 0 ) + 
                    ( (row1 != 0) ? sum[row1-1][col2] : 0 ) - 
                    ( (row1 != 0 && col1 != 0) ? sum[row1-1][col1-1] : 0 ) ;
        // every sign in extra will change cause of minus while return  
        
        return total - extra; 
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */