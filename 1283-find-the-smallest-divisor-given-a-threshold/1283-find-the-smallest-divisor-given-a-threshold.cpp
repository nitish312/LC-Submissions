class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int start = 1, end = 0;
        
        for(auto a: nums) end = max(end, a);
        
        while(start < end){
            
            int mid = start + (end - start) / 2;
            
            int sum = 0;
            
            for(auto a: nums){
                
                sum += (a + mid - 1) / mid;
            }
            
            if(sum > threshold) start = mid + 1;
            else end = mid;            
        }
        
        return start;
    }
};