class Solution {
public:
    vector<int> getRow(int row) {
        vector<int> result;
        long start = 1;
        result.push_back(start);
        for (int i = 0; i < row; i++) {
            start *= (row - i);
            start /= (i + 1);
            result.push_back(start);
        }
        return result;
    }
};
