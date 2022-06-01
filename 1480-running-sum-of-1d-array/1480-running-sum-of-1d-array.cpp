class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> ans;
        
        ans.push_back(nums[0]);
        
        
        
        for(int i=1; i<nums.size(); i++){
            
            int prefixSum = 0;
            
            for(int j=0; j<=i; j++){
                
                prefixSum += nums[j];
            }
            
            ans.push_back(prefixSum);
        }
        
        return ans;
    }
};