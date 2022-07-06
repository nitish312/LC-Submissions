class Solution {
public:
    int fib(int n) {
        
        int first = 0, second = 1, next;
        
        if(n < 2) return n;
        
        for(int i=1; i<n; i++){
                
            next = first + second;
            first = second;
            second = next;
        }
        
        return next;
    }
};