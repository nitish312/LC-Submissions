class Solution {
public:
    
//     bool isPalindrome(string s, int n){
        
//         int start = 0, end = n - 1;
//         while(start < end){
            
//             if(s[start] != s[end]) return false;
            
//             start++, end--;
//         }
//         return true;
//     }
    
    int removePalindromeSub(string s) {
        
//         int n = s.size();
        
//         if(n == 0) return 0;
//         if(isPalindrome(s, n)) return 1;
        string temp = s;
        reverse(temp.begin(), temp.end());
        if(temp == s) return 1;
        
        return 2;
    }
};