class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> ans;
        
        ans.push_back(nums[0]);
        
        int prefixSum = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            
            
            
            // for(int j=0; j<=i; j++){
                
                prefixSum += nums[i];
            // }
            
            ans.push_back(prefixSum);
        }
        
        return ans;
    }
};