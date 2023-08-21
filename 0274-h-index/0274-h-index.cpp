class Solution {
public:
    int hIndex(vector<int>& citations) {
        int count=0,val=1;
        sort(citations.begin(),citations.end(),greater<int>());
        for(int i=0;i<citations.size();i++)
        {
            if(citations[i]>=val)
            {
                count++;
            }
            val=val+1;
        }
        return count;
    }
};