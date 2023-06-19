class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxy = arr[n-1];
        arr[n-1] = -1;
        for(int i = n-2; i >= 0; i--){
                int temp = arr[i];
                if(maxy<temp){
                    arr[i] = maxy;
                    maxy = temp;
                }
                else{
                    arr[i] = maxy;
            }
        }
        return arr;
    }
};