class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        vector<int> ans; //using extra space
        
        for(auto ele : nums){
            
            if(ele % 2 == 0) ans.push_back(ele);
        }
        
        for(auto ele : nums){
            
            if(ele % 2 != 0) ans.push_back(ele);
        }
        
        return ans;
    }
};