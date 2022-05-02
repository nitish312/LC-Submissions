class Solution {
public:
    
    int solve(vector<int>& nums, int val){
        
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i] >= val) count++;
        }
        return count;
    }
    int specialArray(vector<int>& nums){
        
        int start = 0, end = 1000;
        
        while(start <= end){
            
            int mid = start + (end - start) / 2;
            
            int comp = solve(nums, mid);
            
            if(comp == mid) return comp;
            if(mid < comp) start = mid + 1;
            else end = mid - 1;
        }
        
        return -1;
    }
};