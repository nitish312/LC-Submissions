class Solution {
public:
    bool isPalindrome(int x) {
     
        if(x < 0) return false;
        
        int n = x;
        long rev = 0;
        while(n){
            
            int lastDigit = n % 10;
            rev = rev * 10 + lastDigit;
            n /= 10;
        }
        
        return (rev == x) ? true : false;
    }
};