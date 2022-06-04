class Solution {
public:
    
    vector<vector<string>> ans;
    
    bool isSafe(vector<string> &board, int r, int c){
        
        for(int i=0; i<r; i++){
            
            if(board[i][c] == 'Q') return false;
        }
        
        int row = r, col = c;
        while(row >= 0 && col >= 0){
            
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        
        row = r, col = c;
        while(row >= 0 && col < board.size()){
            if(board[row][col] == 'Q') return false;
            row--;
            col++;
        }
        
        return true;
    }
    
    void nQueen(vector<string> &board, int r){
        
        if(r == board.size()){
            ans.push_back(board);
            return;
        }
        
        for(int i=0; i<board.size(); i++){
            
            if(isSafe(board, r, i)){
                
                board[r][i] = 'Q';
                nQueen(board, r+1);
                board[r][i] = '.';
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n){
        
        if(n <= 0) return {{}};
        
        vector<string> board(n, string(n, '.'));
        
        nQueen(board, 0);
        
        return ans;
    }
};