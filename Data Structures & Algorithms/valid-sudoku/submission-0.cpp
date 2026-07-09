class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            vector<char>row;
            vector<char>col;
            vector<char>box;

            int startRow = (i / 3) * 3;
            int startCol = (i % 3) * 3;
            for(int j=0;j<9;j++){
                
                
                //Rows
                if(board[i][j]!='.'){
                    if(find(row.begin(),row.end(), board[i][j])!= row.end()){
                        return false;
                    }
                    row.push_back(board[i][j]);
                }

                //Column
                if(board[j][i]!='.'){
                    if(find(col.begin(),col.end(), board[j][i])!= col.end()){
                        return false;
                    }
                    col.push_back(board[j][i]);
                }

                //3x3
                int r = startRow + j / 3;
                int c = startCol + j % 3;

                if (board[r][c] != '.') {
                    if (find(box.begin(), box.end(), board[r][c]) != box.end())
                        return false;
                    box.push_back(board[r][c]);
                }
            }
        }

        return true;
    }
};

