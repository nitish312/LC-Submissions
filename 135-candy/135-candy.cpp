class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n = ratings.size();
        
        vector<int> fromLeft(n+1, 1);
        
        for(int i=1; i<n; i++){
            
            if(ratings[i] > ratings[i-1]){
                
                fromLeft[i] = fromLeft[i-1] + 1;
            }
        }
        
        int right = 1;
        
        for(int i=n-2; i>=0; i--){
            
            if(ratings[i] > ratings[i+1]){
                
                right++;
                fromLeft[i] = max(right, fromLeft[i]);
            }
            else right = 1;
        }
        
        int sum = 0;
        
        for(int i=0; i<n; i++){
            
            sum += fromLeft[i];
        }
        
        return sum;
    }
};