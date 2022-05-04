class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        
        int start = 0, end = nums.size() - 1, mid;
        while(start < end){
            
            mid = start + (end - start) / 2;
            if(nums[start] + nums[end] == k){
                ans++;
                start++;
                end--;
            }
            else if(nums[start] + nums[end] < k){
                start++;
            }
            else end--;
        }
        
        return ans;
    }
};