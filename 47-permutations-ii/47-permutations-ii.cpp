class Solution {
public:
    
    void calculatePermutations(vector<int>nums, int index, vector<vector<int>> &ans){
        
        // base condition - think of a smallest valid input
        if(index == nums.size()){
            ans.push_back(nums);
            return;
        }
        
        // choice diagram - minimize the input
        for(int i=index; i<nums.size(); i++){
            
            if(nums[i] == nums[index] && i != index) continue;
            
            swap(nums[i], nums[index]);
            calculatePermutations(nums, index+1, ans);
            
            // swap(nums[i], nums[index]);
            // calculatePermutations(nums, ans, index+1); // recursively calling func
            // swap(nums[i], nums[index]); // backtracking step
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums){
        
        sort(nums.begin(), nums.end());        
        vector<vector<int>> ans;
        int index = 0;
        calculatePermutations(nums, index, ans);
        
        return ans;
    }
};