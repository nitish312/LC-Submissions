class Solution {
public:   
    int minMoves2(vector<int>& nums) {
        
        int n = nums.size();
    
        int count = 0;
        
        sort(nums.begin(), nums.end()); 
        
        int median = nums[n/2];
        
        for(auto& i: nums) count += abs(median - i);
        
        return count;
    }
};