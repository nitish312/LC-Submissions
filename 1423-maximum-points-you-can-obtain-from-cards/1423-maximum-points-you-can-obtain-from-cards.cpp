class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
    
        int res = 0;
		
		//First k elements in our window
        for(int i=0; i<k; i++) res += cardPoints[i];
        
        int curr = res;
        for(int i=k-1; i>=0; i--){
            
			//We remove the last visited ele and add the non-visited ele from the last
            curr -= cardPoints[i];
            curr += cardPoints[n - k + i];
			
            //We check the maximum value any possible combination can give
			res = max(res, curr);
        }
        
        return res;
    }
};