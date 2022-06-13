class Solution {
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> allSubsets;
        
        int n = nums.size();
        
        allSubsets.push_back({});
        
        for(int i=0; i<n; i++){
            
            int mainVecSize = allSubsets.size();
            
            for(int j=0; j<mainVecSize; j++){
                
                vector<int> v = allSubsets[j];
                v.push_back(nums[i]);
                allSubsets.push_back(v);
            }
        }
        return allSubsets;
    }
};