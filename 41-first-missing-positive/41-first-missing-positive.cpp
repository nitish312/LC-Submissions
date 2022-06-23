class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            
            int ele = nums[i];
            while(ele > 0 && ele <= n && ele != nums[ele - 1]){
                
                swap(ele, nums[ele - 1]);
            }
        }
        
        for(int i=0; i<n; i++){
            
            if(i+1 != nums[i]) return i+1;
        }
        
        return n+1;
    }
};