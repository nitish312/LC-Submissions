class Solution {
public:
    int numberOfSteps(int num) {
        
        if(num == 0) return 0;
        if(num == 1) return 1;
        
        int steps = 0;
        
        while(num != 0){
            
            if(num % 2 == 0){
                num /= 2;
                steps++;
            } 
            else{
                num--; 
                steps++;
            } 
        }
        
        
        return steps;
    }
};