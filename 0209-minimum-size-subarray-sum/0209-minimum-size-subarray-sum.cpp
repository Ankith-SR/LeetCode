class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n=a.size();
		
        int i,j,sum, minlen=n+1;
        i=j=sum=0;
		
        while(j<n){
            sum+=a[j];
			
            while(i<=j && sum>=target){
                minlen = min(minlen,j-i+1);
                sum-=a[i]; 
                i++;
            }
			
            j++;
        }
        
        return (minlen==n+1 ? 0:minlen);
    }
};