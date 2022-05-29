class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> m;
        
        for(auto a: nums) m[a]++;
        
        for(auto a: m){
            
            if(a.second != 2) return a.first;
        }
        
        return -1;
    }
};