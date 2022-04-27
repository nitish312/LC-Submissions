class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
//         int n = arr.size();
        
//         int start = 0, end = n - 1, mid;
        
//         while(start <= end){
            
//             mid = start + (end - start) / 2;
            
            
//         }
        
        int index = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i+1] < arr[i]){
                return i;
            }
        }
        return 0;
    }
};