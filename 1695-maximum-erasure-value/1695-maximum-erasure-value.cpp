class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        int arr[10001] = {0};
        int i = 0, j = 0, sum = 0, ans = 0;
        while(j < nums.size()) {
            while(arr[nums[j]] > 0) {
                arr[nums[i]]--;
                sum -= nums[i];
                i++;
            }
            arr[nums[j]]++;
            sum += nums[j];
            j++;
            
            ans = max(ans, sum);
        }
        return ans;
    }
};