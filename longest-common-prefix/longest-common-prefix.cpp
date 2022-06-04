class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string LCP_Str = "";
        
        int totalStrings = strs.size();
        
        if(totalStrings == 0) return LCP_Str;
        
        sort(strs.begin(), strs.end()); 
        // now we have string sorted according to their sizes
        
        int lastString = totalStrings - 1;
        
        string smallStr = strs[0];
        string largeStr = strs[lastString];
        
        int smallStrSize = smallStr.size();
        
        for(int i = 0; i < smallStrSize; i++) {
            
            if(smallStr[i] != largeStr[i]) break;
            
            LCP_Str += smallStr[i];
        }
        
        return LCP_Str;
    }
};