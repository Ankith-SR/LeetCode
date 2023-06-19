class Solution {
public:
    int maxNumberOfBalloons(string s) 
    {
        string target = "balloon";

        vector<int>v1(26,0);
        for(int i=0;i<target.length();i++)
        {
            char ch = target[i];
            v1[ch-'a']++;
        }
        vector<int>v2(26,0);
        for(int i=0;i<s.length();i++)  
        {
            char ch = s[i];
            v2[ch-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(v1[i]==0)
            {
                continue;
            }
            else
            {
                v2[i] = v2[i] / v1[i];
            }
        }
        int ans=INT_MAX;
        unordered_set<char>st(target.begin(),target.end());
        for(auto ch : st)
        {
            int val = ch - 'a';
            ans=min(ans,v2[val]);
        }
        return ans;
    }
};
