class Solution {
public:
    
    void generate(vector<int>& nums, vector<int>& sbst, int i, vector<vector<int>>& allSubsets){
        
        if(i == nums.size()){
            
            allSubsets.push_back(sbst);
            return;
        }
        
        // ith element not in subset
        generate(nums, sbst, i+1, allSubsets);
        
        // ith element in subset
        sbst.push_back(nums[i]);
        generate(nums, sbst, i+1, allSubsets);
        sbst.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> allSubsets;
        vector<int> sbst;
        generate(nums, sbst, 0, allSubsets);
        
        return allSubsets;
    }
};