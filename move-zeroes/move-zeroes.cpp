class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        
        int cnt = 0;
        int start = 0;
        for(int i=0; i<n; i++){
            
            if(nums[i] == 0) cnt++;
            
            if(nums[i] != 0){
                nums[start] = nums[i];
                start++;
            }
        }
        
        while(start != n){
            
            nums[start] = 0;
            start++;
        }
    }
};