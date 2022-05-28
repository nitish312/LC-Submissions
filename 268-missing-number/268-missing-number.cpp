class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        
        int arraySum = 0;
        
        for(int a: nums){
            
            arraySum += a;
        } 
            
        int realSum = n * (n + 1) / 2;
        
        return realSum - arraySum;
    }
};