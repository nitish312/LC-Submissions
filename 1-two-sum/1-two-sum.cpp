class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            
            int ele1 = nums[i];
            for(int j=i+1; j<n; j++){
                
                int ele2 = nums[j];
                if(target - ele2 == ele1){
                    
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }
        
        return ans;
    }
};