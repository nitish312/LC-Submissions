class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<=n; i++){
            
            if(i == n || i != nums[i]) return i;
        }
        
        return -1;
    }
};