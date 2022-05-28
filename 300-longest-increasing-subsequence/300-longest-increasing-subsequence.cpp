class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0) return 0;
        
        vector<int> maxelems{nums[0]};
        
        for(int i=1; i<n; i++){
            
            if(nums[i] <= maxelems.back()){
                
                int j = 0;
                
                while(nums[i] > maxelems[j]) j++;
                
                maxelems[j] = nums[i];
                
            } 
            else maxelems.push_back(nums[i]);
        }
        
        return maxelems.size();
    }
};