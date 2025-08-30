class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool box[9][9] = {false};

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int num = board[i][j] - '1';
                    int boxi = (i / 3) * 3 + (j / 3);
                    if(row[i][num] || col[j][num] || box[boxi][num]){
                        return false;
                    }
                    row[i][num] = col[j][num] = box[boxi][num] = true;
                }
            }
        }
        return true;
    }
};