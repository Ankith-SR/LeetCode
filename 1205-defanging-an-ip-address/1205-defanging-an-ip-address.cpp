class Solution {
public:
    string defangIPaddr(string address) {
        size_t found = address.find(".");
        while (found != string::npos) {
            address.replace(found, 1, "[.]");
            found = address.find(".", found + 3);  
        }
        return address;
    }
};
