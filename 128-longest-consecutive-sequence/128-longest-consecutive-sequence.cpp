class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        if(n == 0) return 0;
        
        int ans = 0, curr_longest = 1;
        
        for(int i=1; i<n; i++){
            
            if(nums[i] == nums[i-1]) continue;
            else if(nums[i] == nums[i-1] + 1) curr_longest++;
            else{
                
                ans = max(ans, curr_longest);
                curr_longest = 1;
            }
        }
        
        return max(ans, curr_longest);
    }
};