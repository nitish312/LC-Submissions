class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        
        int start = 0, end = nums.size() - 1;
        
        while(start <= end){
            
            int mid = start + (end - start) / 2;
            
            if(target == nums[mid]) return mid;
            
            //if rotation exists, mid ele is in left part of the array
            if(nums[mid] > nums[end]){
                
                if (target < nums[mid] && target >= nums[start]) end = mid - 1;
                else start = mid + 1; 
            }
            
            //if rotation exists, mid ele is in right part of the array
            else if(nums[mid] < nums[start]){
                
                if (target > nums[mid] && target <= nums[end]) start = mid + 1;
                else end = mid - 1; 
            }
            
            // if there is no rotation; dp normal binary search
            else{
                
                if(nums[mid] < target) start = mid + 1;
                else end = mid - 1;
            }
        }
        
        return -1;
    }
};













