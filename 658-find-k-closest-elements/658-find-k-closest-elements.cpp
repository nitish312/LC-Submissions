class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int start = 0, end = arr.size() - k, mid;
        
        while(start < end){
            
            mid = start + (end - start) / 2;
            
            if(x - arr[mid] > arr[mid + k] - x) start = mid + 1;
            else end = mid;
        }
        
        return vector<int>(arr.begin() + start, arr.begin() + start + k);
    }
};