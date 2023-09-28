class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseCode = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
            "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
            "..-", "...-", ".--", "-..-", "-.--", "--.."
        };

        unordered_set<string> uniqueMorse;

        for (const string& word : words) {
            string morseRepresentation = "";
            for (char c : word) {
                morseRepresentation += morseCode[c - 'a'];
            }
            uniqueMorse.insert(morseRepresentation);
        }

        return uniqueMorse.size();
    }
};