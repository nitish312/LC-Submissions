class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        
        int totalSum = 0;
        for(int i=0; i<n; ++i){
            
            totalSum += nums[i];
        }
        
        int leftSum = 0, rightSum = totalSum;
        for(int i=0; i<n; ++i){
            
            rightSum -= nums[i];
            
            if(rightSum == leftSum) return i;
            
            leftSum += nums[i];
        }
        
        return -1;
    }
};