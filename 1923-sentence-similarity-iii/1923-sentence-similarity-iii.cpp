class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {

        stringstream s1(sentence1);
        stringstream s2(sentence2);
        string word;
        vector<string> sw1;
        vector<string> sw2;

        while(s1 >> word){
            sw1.push_back(word);
        }
        while(s2 >> word){
            sw2.push_back(word);
        }
        int start = 0;
        int end1 = sw1.size() - 1;
        int end2 = sw2.size() - 1;

        if(sw1.size() > sw2.size()){
            return areSentencesSimilar(sentence2, sentence1);
        }

        while(start < sw1.size() && sw1[start] == sw2[start]){
            start++;
        }
        while(end1 >=0 && sw1[end1] == sw2[end2]){
            end1--;
            end2--;
        }
        return end1 < start;
    }
};