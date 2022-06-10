class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        vector<int> vec;
        
        int sum = 0;
        
        for(auto a: nums){
            
            sum += a;
            vec.push_back(sum);
        }
        
        return vec;
    }
};