class Solution {
public:
    void addCheckTable(char& num, unordered_map<char, int>& table, bool& flag){ //function for addding number to the table and checking the appearence
        if(table.count(num) == 0 && num != '.'){
            table.insert(pair<char, int>(num, 1));
        }
        else if(table.count(num) != 0){
            flag = false; //number is already on the table so make the flag false
        }
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<char, int> hashRow1;
        unordered_map<char, int> hashRow2;
        unordered_map<char, int> hashRow3;
        unordered_map<char, int> hashRow4;
        unordered_map<char, int> hashRow5;   //hash tables for rows
        unordered_map<char, int> hashRow6;
        unordered_map<char, int> hashRow7;
        unordered_map<char, int> hashRow8;
        unordered_map<char, int> hashRow9;
        
        unordered_map<char, int> hashCol1;
        unordered_map<char, int> hashCol2;
        unordered_map<char, int> hashCol3;
        unordered_map<char, int> hashCol4;
        unordered_map<char, int> hashCol5;   //hash tables for rows
        unordered_map<char, int> hashCol6;
        unordered_map<char, int> hashCol7;
        unordered_map<char, int> hashCol8;
        unordered_map<char, int> hashCol9;
        
        unordered_map<char, int> hashBox00;
        unordered_map<char, int> hashBox01;
        unordered_map<char, int> hashBox02;
        unordered_map<char, int> hashBox10;
        unordered_map<char, int> hashBox11;  //hash tables for sub-boxes. 0 and 1's are indexes. ex: hashBox00 is the sub-box on the left top
        unordered_map<char, int> hashBox12;
        unordered_map<char, int> hashBox20;
        unordered_map<char, int> hashBox21;
        unordered_map<char, int> hashBox22;
        
        bool flag = true;
        for(int i = 0; i < 9; i++){ //loop for filling the tables
            addCheckTable(board[i][0], hashRow1, flag);
            addCheckTable(board[i][1], hashRow2, flag);
            addCheckTable(board[i][2], hashRow3, flag);
            addCheckTable(board[i][3], hashRow4, flag);
            addCheckTable(board[i][4], hashRow5, flag);  //fills and checks the row tables
            addCheckTable(board[i][5], hashRow6, flag);
            addCheckTable(board[i][6], hashRow7, flag);
            addCheckTable(board[i][7], hashRow8, flag);
            addCheckTable(board[i][8], hashRow9, flag);
            if(flag == false){
                return flag;
            }
            addCheckTable(board[0][i], hashCol1, flag);
            addCheckTable(board[1][i], hashCol2, flag);
            addCheckTable(board[2][i], hashCol3, flag);
            addCheckTable(board[3][i], hashCol4, flag);
            addCheckTable(board[4][i], hashCol5, flag);  //fills and checks the column tables
            addCheckTable(board[5][i], hashCol6, flag);
            addCheckTable(board[6][i], hashCol7, flag);
            addCheckTable(board[7][i], hashCol8, flag);
            addCheckTable(board[8][i], hashCol9, flag);
            if(flag == false){
                return flag;
            }
            
            for(int j = 0; j < 9; j++){ //inner loop for filling and checking the sub-boxes
                if(i <= 2 && j <= 2){
                    addCheckTable(board[i][j], hashBox00, flag);
                }
                else if(i <= 2 && j > 2 && j < 6){
                    addCheckTable(board[i][j], hashBox01, flag);
                }
                else if(i <= 2 && j > 5){
                    addCheckTable(board[i][j], hashBox02, flag);
                }
                else if(i > 2 && i < 6 && j <= 2){
                    addCheckTable(board[i][j], hashBox10, flag);
                }
                else if(i > 2 && i < 6 && j > 2 && j < 6){
                    addCheckTable(board[i][j], hashBox11, flag);
                }
                else if(i > 2 && i < 6 && j > 5){
                    addCheckTable(board[i][j], hashBox12, flag);
                }
                else if(i > 5 && j <= 2){
                    addCheckTable(board[i][j], hashBox20, flag);
                }
                else if(i > 5 && j > 2 && j < 6){
                    addCheckTable(board[i][j], hashBox21, flag);
                }
                else if(i > 5 && j > 5){
                    addCheckTable(board[i][j], hashBox22, flag);
                }
                if(flag == false){
                    return flag;
                }
            }
        }
        return flag; //returns flag
    }
};