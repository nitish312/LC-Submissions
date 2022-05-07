class Solution {
public:
    int findMin(vector<int>& nums){
        
        int start = 0, end = nums.size()-1;
        int result = end;
        
        while(start < end) {
            int mid = start + (end - start)/2;
            if(nums[mid] > nums[end]) {
                start = mid+1;
            }else {
                end = mid;
                result = mid;
            }
            
        }
        
        return nums[result];
    }
};