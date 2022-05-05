class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long int start = 0, end = sqrt(c);
        while(start <= end){
            
            long long int ele = (start * start) + (end * end);
            if(ele == c) return true;
            else if(ele < c) start++;
            else end--;
        }
        
        return false;
    }
};