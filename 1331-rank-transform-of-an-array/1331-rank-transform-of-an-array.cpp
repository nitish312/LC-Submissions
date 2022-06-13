class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        int n = arr.size();
        
        set<int> st;
        
        for(auto i: arr) st.insert(i);
        
        unordered_map<int, int> mp;
        
        int rank = 1;
        for(auto &i: st) mp[i] = rank++;
        
        for(auto &i: arr) i = mp[i];        
        
        return arr;
    }
};