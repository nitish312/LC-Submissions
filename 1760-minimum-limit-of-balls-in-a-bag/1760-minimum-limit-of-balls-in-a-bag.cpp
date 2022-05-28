class Solution {
public:
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        
        int start = 1, end = 1e9;
        
        while(start < end){
            
            int mid = (start + end) / 2, count = 0;
            
            for(int a: nums) count += (a - 1) / mid;
                
            if(count > maxOperations) start = mid + 1;
            else end = mid;
        }
        
        return start;
    }
};