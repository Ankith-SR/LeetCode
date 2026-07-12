class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        bool frz = false;
        bool fcz = false;

        for(int c = 0; c < cols; c++){
            if(matrix[0][c] == 0){
                frz = true;
                break;
            }
        }

        for(int r = 0; r < rows; r++){
            if(matrix[r][0] == 0){
                fcz = true;
                break;
            }
        }

        for(int r = 1; r < rows; r++){
            for(int c = 1; c < cols; c++){
                if(matrix[r][c] == 0){
                    matrix[r][0] = 0;
                    matrix[0][c] = 0;
                }
            }
        }

        for(int r = 1; r < rows; r++){
            if(matrix[r][0] == 0){
                for(int c = 1; c < cols; c++){
                    matrix[r][c] = 0;
                }
            }
        }

        for(int c = 1; c < cols; c++){
            if(matrix[0][c] == 0){
                for(int r = 1; r < rows; r++){
                    matrix[r][c] = 0;
                }
            }
        }

        if(frz){
            for(int c = 0; c < cols; c++){
                matrix[0][c] = 0;
            }
        }

        if(fcz){
            for(int r = 0; r < rows; r++){
                matrix[r][0] = 0;
            }
        }
    }
};