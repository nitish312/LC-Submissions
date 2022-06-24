class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> uniqEle;
        for(auto ele: nums1) uniqEle.insert(ele);
            
        vector<int> ans;
        
        for(auto ele: nums2){
            
            auto it = uniqEle.find(ele);
            
            if(it != uniqEle.end()){
                
                ans.push_back(ele);
                uniqEle.erase(it);
            }
        }
        
        return ans;
    }
};