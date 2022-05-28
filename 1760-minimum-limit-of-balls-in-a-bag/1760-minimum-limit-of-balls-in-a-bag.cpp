class Solution {
public:
    
    bool check(int mid, vector<int> &nums, int maxOperations){
        
        for(int i=0; i<nums.size(); i++){
            
            maxOperations -= nums[i] / mid;
            if(nums[i] % mid == 0) maxOperations++;
        }
        
        return (maxOperations >= 0);
    }
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        
        int ans = 0;
        
        int start = 1, end = INT_MAX, mid;
        
        while(start <= end){
            
            mid = start + (end - start) / 2;
            
            if(check(mid, nums, maxOperations)){
                
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        
        return ans;
    }
};