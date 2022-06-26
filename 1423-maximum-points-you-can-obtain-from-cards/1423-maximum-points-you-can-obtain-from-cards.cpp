class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
    
        int sum =0;
        for(int i=0; i<k; i++) sum += cardPoints[i];
        
        int maxsum = sum;
        
        for(int i=0; i<k; i++){
            
            sum += cardPoints[n - i - 1] - cardPoints[k - i - 1];
            
            if(sum > maxsum) maxsum = sum;
        }
        
        return maxsum;
    }
};