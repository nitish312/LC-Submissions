class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        int start = 0, end = n - 1, mid;
        while(start <= end){
            
            mid = start + (end - start) / 2;
            
            if(nums[mid] == target) return mid;
            
            if(nums[mid] > nums[end]){
                
                if(nums[mid] > target && target >= nums[start]) end = mid - 1;
                else start = mid + 1;
            }
            else if(nums[mid] < nums[start]){
                
                if(nums[mid] < target && target <= nums[end]) start = mid + 1;
                else end = mid - 1;
            }
            else{
                
                if(nums[mid] < target) start = mid + 1;
                else end = mid - 1;
            }
        }
        
        return -1;
    }
};













