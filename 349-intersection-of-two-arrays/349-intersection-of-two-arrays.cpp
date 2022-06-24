class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        
        int n = nums1.size();
        int m = nums2.size();
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        unordered_set<int> uniqEle;
        
        int i = 0, j = 0;
        while(i < n && j < m){
            
            if(nums1[i] < nums2[j]) i++;
            else if(nums1[i] > nums2[j]) j++;
            else{
                
                uniqEle.insert(nums1[i]);
                i++;
                j++;
            }
        }
        
        for(auto ele: uniqEle) ans.push_back(ele);
        
        return ans;
    }
};