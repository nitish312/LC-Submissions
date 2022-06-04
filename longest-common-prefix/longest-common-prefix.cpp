class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string LCP_Str = "";
        
        int n = strs.size();
        
        if(n == 0) return LCP_Str;
        
        sort(strs.begin(), strs.end()); 
        // now we have string sorted according to their sizes
        
        string smallStr = strs[0];
        string largeStr = strs[n-1];
        
        int smallStrSize = smallStr.size();
        
        for(int i=0; i<smallStrSize; i++){
            
            if(smallStr[i] != largeStr[i]) break;
            
            LCP_Str += smallStr[i];
        }
        
        return LCP_Str;
    }
};