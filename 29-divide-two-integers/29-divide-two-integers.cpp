class Solution {
public:
    int divide(int dividend, int divisor){
        
        if(dividend == 0) return 0;
        if(divisor == 1) return dividend;
        if(divisor == -1) return dividend == INT_MIN ? INT_MAX : 0 - dividend;
        return dividend / divisor;
        
        
    }
};