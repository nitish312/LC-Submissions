class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int start = 0, end = arr.size(), mid;
        
        while(start < end){
            
            mid = start + (end - start) / 2;
            
            if(arr[mid] - 1 - mid < k) start = mid + 1;
            else end = mid;
        }
        
        return start + k;
    }
};