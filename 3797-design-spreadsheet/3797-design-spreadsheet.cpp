class Spreadsheet {
public:
    unordered_map<string, int> mp;
    Spreadsheet(int rows) {}
    
    void setCell(string cell, int value) {
        mp[cell] = value;
    }
    
    void resetCell(string cell) {
        mp[cell] = 0;
    }
    
    int getValue(string formula) {
        size_t plusPos = formula.find('+');
        string s1 = formula.substr(1, plusPos - 1);
        string s2 = formula.substr(plusPos + 1);
        int res1 = s1[0] >= 'A' && s1[0] <= 'Z' ? mp[s1] : stoi(s1);
        int res2 = s2[0] >= 'A' && s2[0] <= 'Z' ? mp[s2] : stoi(s2);
        
        return res1 + res2;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */