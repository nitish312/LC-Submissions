class Solution {
public:
    
    bool isPalindrome(string s, int n){
        
        int start = 0, end = n - 1;
        while(start < end){
            
            if(s[start] != s[end]) return false;
            
            start++, end--;
        }
        return true;
    }
    
    int removePalindromeSub(string s) {
        
        int n = s.size();
        
        if(n == 0) return 0;
        if(isPalindrome(s, n)) return 1;
        
        unordered_set<char> st;
        
        for(int i=0; s[i]!='\0'; i++) st.insert(s[i]);
        
        return st.size();
    }
};