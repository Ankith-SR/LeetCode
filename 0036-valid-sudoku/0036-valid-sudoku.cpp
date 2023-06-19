//ValidSudoku(vector<vector<char>>& board) {
        //set<char> sp;
        //for(int i = 0; i<9; i++){
            //for(int j = 0; j<9; j++){
                //if(sp.find(board[i][j]) != sp.end()){
                    //return false;
                //}
                //if(board[i][j] != '.'){
                    //sp.insert(board[i][j]);
                //}
            //}
        //}
        //set<char> st;
        //for(int i = 0; i<9; i++){
            //for(int j = 0; j<9; j++){
                //if(st.find(board[j][i]) != st.end()){
                    //return false;
                //}
                //if(board[j][i] != '.'){
                    //st.insert(board[j][i]);
                //}
            //}
        //}
        //set<char> tt;
        //int n = 3;
        //int j;
        //for(int k = 0; k<9; k++){
            //for(int i = k%3; i<n; i++){
                //for(j = k%3; j<n; j++){
                    //if(tt.find(board[i][j]) != tt.end()){
                        //return false;
                    //}
                    //if(board[i][j] != '.'){
                        //tt.insert(board[i][j]);
                    //}
                //}
                //j = j+3;
            //}
            //n = n +3;
        //}
        //return true;
    //}
/*
    Determine if a 9x9 Sudoku board is valid (no repeats)

    Boolean matrices to store seen values. Check rows, cols, 3x3 sub-boxes

    Time: O(cnt^2)
    Space: O(cnt^2)
*/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    unordered_set<string> seen;

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            char current_val = board[i][j];

            if (current_val != '.') {
                // Check row
                string row_key = "row " + to_string(i) + " " + current_val;
                if (seen.count(row_key) > 0)
                    return false;
                seen.insert(row_key);

                // Check column
                string col_key = "col " + to_string(j) + " " + current_val;
                if (seen.count(col_key) > 0)
                    return false;
                seen.insert(col_key);

                // Check box
                int box_row = i / 3;
                int box_col = j / 3;
                string box_key = "box " + to_string(box_row) + "-" + to_string(box_col) + " " + current_val;
                if (seen.count(box_key) > 0)
                    return false;
                seen.insert(box_key);
            }
        }
    }

    return true;
}
};
   