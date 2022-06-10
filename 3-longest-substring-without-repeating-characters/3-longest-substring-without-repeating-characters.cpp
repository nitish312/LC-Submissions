class Solution {
public:
    int lengthOfLongestSubstring(string s){
        
        int n = s.size();
        
        set<char> st;
        int maxi = 0;
        
        int start = 0, end = 0;
        while(end < n){
            
            if(st.find(s[end]) == st.end()){ //check if curr char is present in set
                // if not // if curr char is unique 
                st.insert(s[end]); // inserting it into set
                int currStrsz = end - start + 1;
                maxi = max(maxi, currStrsz); //update max if current size is maximum
                end++; // check for next character in string
            }
            else{
                // otherwise
                st.erase(s[start]); // remove that char from start end, so we can have curr char in our substring for next iteration
                start++; // update start to its next char
            }
        }
        
        return maxi;
    }
};