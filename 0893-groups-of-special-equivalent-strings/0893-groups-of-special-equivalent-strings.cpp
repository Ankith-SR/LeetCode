class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
            unordered_set<string> s;
            for (const auto& w : words) {
                string odd, even;
                for (int i = 0; i < w.size (); ++i) {
                    if (i % 2) even  += w[i];
                    else       odd += w[i];
                }
                sort (even.begin (), even.end());
                sort (odd.begin(), odd.end());
                s.insert(even +  odd);
            }
        return s.size ();
    }
};