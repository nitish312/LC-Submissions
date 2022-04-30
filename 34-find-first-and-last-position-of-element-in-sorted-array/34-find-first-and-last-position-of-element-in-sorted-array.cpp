class Solution {
public:
    
    int getFirstOcc(vector<int> &nums, int target){
        
        int start = 0, end = nums.size() - 1, mid;
        int index = -1;
        while(start <= end){
            
            mid = start + (end - start) / 2;
            if(nums[mid] == target){
                index = mid;
                end = mid - 1;
            } 
            else if(nums[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        
        return index;
    }
    
    int getLastOcc(vector<int> &nums, int target){
        
        int start = 0, end = nums.size() - 1, mid;
        int index = -1;
        while(start <= end){
            
            mid = start + (end - start) / 2;
            if(nums[mid] == target){
                index = mid;
                start = mid + 1;
            } 
            else if(nums[mid] < target) start = mid + 1;
            else end = mid - 1;
        }
        
        return index;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int first = getFirstOcc(nums, target);
        int last = getLastOcc(nums, target);
        
        ans.push_back(first);
        ans.push_back(last);
        
        return ans;
    }
};