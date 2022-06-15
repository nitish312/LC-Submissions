class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int> preSum;
        int sum = 0;
        for(int i = 0; i < n; i++){
            
            sum += nums[i];
            preSum.push_back(sum);
        }
        
        for(int i = 0; i < n; i++){
            
            int curr = i;
            
            int leftSum = (curr == 0) ? 0 : preSum[curr - 1];
            int rightSum = (curr == n - 1) ? 0 : preSum[n - 1] - preSum[curr];
            
            if(leftSum == rightSum) return curr;
        }
        
        return -1;
    }
};