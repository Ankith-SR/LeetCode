class Solution {
public:
    int findMin(vector<int>& arr) {
    
    int start = 0;
    int end = arr.size()-1;
    
    while(start < end){
        if(arr[start] < arr[end]){
            return arr[start];
        }

        int mid = start + (end - start)/2;
        
        if(arr[mid]>=arr[start]){
            start = mid+1;
        }else{
            end = mid;
        }
 
    }
    return arr[start];
    }
};