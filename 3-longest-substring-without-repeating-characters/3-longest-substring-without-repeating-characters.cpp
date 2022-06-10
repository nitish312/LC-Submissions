class Solution {
public:
    int lengthOfLongestSubstring(string s){
        
        int n = s.size();
        
        set<char> st;
        int maxi = 0;
        
        int start = 0, end = 0;
        while(end < n){
            
            if(st.find(s[end]) == st.end()){
                
                st.insert(s[end]);
                int currStrsz = end - start + 1;
                maxi = max(maxi, currStrsz);
                end++;
            }
            else{
                
                st.erase(s[start]);
                start++;
            }
        }
        
        return maxi;
    }
};