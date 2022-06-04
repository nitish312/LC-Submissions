class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int haystackSz = haystack.size();
        int needleSz = needle.size();
        
        if(needleSz == 0) return 0;
        
        for(int i=0; i<haystackSz; i++){
            
            int j=0;
            for( ; j<needleSz; j++){
                
                if(haystack[i+j] != needle[j]) break;
            }
            
            if(j == needleSz) return i;
        }
        
        return -1;
    }
};