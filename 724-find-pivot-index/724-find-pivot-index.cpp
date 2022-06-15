class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            
            sum += nums[i];
            nums[i] = sum;
        }
        
        for(int i = 0; i < n; i++){
            
            int curr = i;
            
            int leftSum = (curr == 0) ? 0 : nums[curr - 1];
            int rightSum = (curr == n - 1) ? 0 : nums[n - 1] - nums[curr];
            
            if(leftSum == rightSum) return curr;
        }
        
        return -1;
    }
};