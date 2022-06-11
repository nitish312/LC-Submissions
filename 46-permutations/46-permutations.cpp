class Solution {
public:
    void calculate_permutation(vector<int>nums, vector<vector<int>> &ans, int index)
    {
        if(index >= nums.size())
        {
            ans.push_back(nums);
            // return;
        }
        for(int i=index; i<nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            calculate_permutation(nums, ans, index+1); // recursively calling function
            swap(nums[index], nums[i]); // backtracing step
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        int index = 0;
        calculate_permutation(nums, ans, index);
        
        return ans;
    }
};