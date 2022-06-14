class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        int n = arr.size();
        
        set<int> st;
        
        for(auto i: arr) st.insert(i);
        
        unordered_map<int, int> mp;
        
        int rank = 1;
        for(auto &i: st) mp[i] = rank++;
        
        for(int i=0; i<n; i++) arr[i] = mp[arr[i]];        
        
        return arr;
    }
};