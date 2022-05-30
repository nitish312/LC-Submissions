#include<bits/stdc++.h>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        
        for(int i=n-1; i>=0; i--){
            
            if(digits[i] != 9){
                
                digits[i]++;
                break;
            }
            else{
                
                digits[i] = 0;
            }
        }
        
        if(digits[0] == 0){
            
            vector<int> allNines(n+1, 0);
            allNines[0] = 1;
            
            return allNines;
        }
        
        return digits;
    }
};