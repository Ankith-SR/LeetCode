class Solution {
    public int mostWordsFound(String[] sentences) {
        int count = 0;
        int ans = 0;
        for(int i = 0; i<sentences.length; i++){
            String s = sentences[i];
            for(int j = 0; j<s.length(); j++){
                if(s.charAt(j) == ' '){
                    count++;
                }
            }
            if(count>ans){
                ans = count;
            }
            count = 0;
        }
        return ans+1;
    }
}