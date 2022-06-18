class Solution {
public:
    
    void swapThem(vector<vector<int>>& matrix, int row, int col){
        
        int temp = matrix[row][col];
        matrix[row][col] = matrix[col][row];
        matrix[col][row] = temp;
    }
    
    void rotate(vector<vector<int>>& matrix) {
        
        reverse(matrix.begin(), matrix.end());
        
        int n = matrix.size();
        
        for(int i=0; i<n; i++){
            
            for(int j=i+1; j<n; j++){
                
                swapThem(matrix, i, j);
            }
        }
    }
};