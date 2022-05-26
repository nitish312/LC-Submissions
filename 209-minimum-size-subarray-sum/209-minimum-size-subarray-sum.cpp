class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        int left = 0;
        int right = 0;
        int shortest = INT_MAX;
        
        while(right < n){
            
            sum += nums[right];
            
            if(sum >= target){
                
                while(sum >= target){
                    
                    sum -= nums[left];
                    left++;
                }
                
                shortest = min(shortest, right - left + 2);
            }
            
            right++;
        }
        
        if(shortest == INT_MAX) return 0;
        else return shortest;
    }
};