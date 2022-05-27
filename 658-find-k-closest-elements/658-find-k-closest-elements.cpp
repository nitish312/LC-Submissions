class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        int n = arr.size();
        
        int start = 0, end = n - k, mid;
        while(start < end){
            
            mid = start + (end - start) / 2;
            
            if(arr[mid] == arr[mid + k]){
                if(arr[mid] < x) start = mid + 1;
                else end = mid;
            }
            else if( abs(x - arr[mid]) <= abs(x - arr[mid + k]) ) end = mid;
            else start = mid + 1;
        }
        
        return vector<int> (begin(arr) + start, begin(arr) + start + k);
    }
};