class Solution {
public:
    
    static bool sortEle(pair<int,int>&a, pair<int,int>&b){
        
        return (a.second == b.second) ? a.first > b.first : a.second < b.second;
    }
    
    vector<int> frequencySort(vector<int>& nums){
        
        int n = nums.size();
        
        if(n==1) return nums;
        
        unordered_map<int, int> mp;
        for(auto a: nums) mp[a]++;
        
        vector<pair<int, int>> ele_freq;
        for(auto a: mp) ele_freq.push_back(a);
        
        sort(ele_freq.begin(), ele_freq.end(), sortEle);
        
        vector<int> ans;
        
        for(auto a : ele_freq){
            
            while(a.second--) ans.push_back(a.first);
        }
        
        return ans;
    }
};