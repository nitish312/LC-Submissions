class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        int n = s.size();
        
        if(n < k) return false;
        
        unordered_set<string> st;
        
        for(int i=0; i<=n-k; i++){
            
            st.insert(s.substr(i, k));
        }
        
        int p = 1;
        for(int i=0; i<k; i++){
            p *= 2;
        }
        
        return (st.size() == p);      
    }
};