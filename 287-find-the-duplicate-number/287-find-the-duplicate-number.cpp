class Solution {
public:
    
    int findDuplicate(vector<int>& nums) {
        
        // using extra space
        
        int n = nums.size();
        
        vector<int> vec(n, 0);
        int ind =  0;
        
        for(int i=0; i<n; i++){
            
            vec[nums[i]]++;
        }
        
        for(int i=0; i<vec.size(); i++){
            
            if(vec[i] > 1){
                
                ind  = i;
                break;
            }
        }
        
        return ind;
    }
};