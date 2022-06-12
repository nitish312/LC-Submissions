class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> prefix(n+1, 0);
        
        for(int i=0; i<n; i++){
            
            prefix[i+1] = prefix[i] + nums[i];
        }
        
        int start = 0, end = n - 1;
        vector<int> vec(10001, -1);
        int ans = 0;
        for(int i=0; i<n; i++){
            
            start = max(start, vec[nums[i]] + 1);
            ans = max(ans, (prefix[i+1] - prefix[start]));
            vec[nums[i]] = i;
        }
        
        return ans;
    }
};