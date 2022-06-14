class Solution {
public:
int maxSubArray(vector<int>& nums) {
int n = nums.size();
int maxSum = 0;
int currSum = 0;
int maxEle = INT_MIN;
for(int i=0; i<n; i++){
currSum = max(currSum + nums[i], 0);
maxSum = max(maxSum, currSum);
maxEle = max(maxEle, nums[i]);
}
return (maxSum != 0) ? maxSum : maxEle;
}
};