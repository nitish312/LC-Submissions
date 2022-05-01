class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> map1;
        for(auto ele: nums){
            
            map1[ele]++;
        }
        
        for(auto ele: map1){
            if(ele.second == 1) return ele.first;
        }
        
        return -1;
    }
};