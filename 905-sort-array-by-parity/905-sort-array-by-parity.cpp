class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
//         for(int i=0, j=0; j<nums.size(); j++){
            
//             if(nums[j] % 2 == 0){
//                 swap(nums[i++], nums[j]);
//             }
//         }
        
        int i=0, j=0;
        while(j < nums.size()){
            
            if(nums[j] % 2 == 0) swap(nums[i++], nums[j]);
            
            j++;
        }
        
        return nums;
    }
};