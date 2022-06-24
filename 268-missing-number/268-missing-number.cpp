class Solution {
public:
    int missingNumber(vector<int>& nums) {
     
        int n = nums.size();
        
//         unordered_set<int> allElems;
//         for(auto ele: nums) allElems.insert(ele);
        
//         for(int i=0; i<=n; i++){
            
//             if(allElems.find(i) == allElems.end()) return i;
//         }
        
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<=n; i++){
            
            if(i == n || i != nums[i]) return i;
        }
        
        return -1;
    }
};