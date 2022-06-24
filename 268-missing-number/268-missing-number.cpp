class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int arraySum = 0;
        for(auto ele: nums) arraySum += ele;
        
        int originalSum = n * (n + 1) / 2;
        
        return originalSum - arraySum;
    }
};