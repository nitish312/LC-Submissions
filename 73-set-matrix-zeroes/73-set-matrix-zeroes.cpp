class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<int> vec1(m, -1);
        vector<int> vec2(n, -1);
        
        for(int i=0; i<m; i++){
            
            for(int j=0; j<n; j++){
                
                if(matrix[i][j] == 0){
                    
                    vec1[i] = 0;
                    vec2[j] = 0;
                }
            }
        }
        
        for(int i=0; i<m; i++){
            
            for(int j=0; j<n; j++){
                
                if(vec1[i] == 0 || vec2[j] == 0){
                    
                    matrix[i][j] = 0;
                }
            }
        }
    }
};