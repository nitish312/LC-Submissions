class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int arrSize = nums.size();
        
        unordered_set<int> st;
        for(auto a: nums) st.insert(a);
        
        int uniqSize = st.size();
        
        if(uniqSize == arrSize) return false;
        else return true;
    }
};