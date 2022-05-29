class Solution {
public:
    
    int calcTime(vector<int> &piles, int mid){
        
        int sum = 0;
         
        for(int i=0; i<piles.size(); i++){
            
            sum += (piles[i] / mid) + ( (piles[i] % mid) != 0 );
        }
        
        return sum;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int minSpeed = 0;
        
        int start = 1, end = *max_element(piles.begin(),piles.end()), mid;
        
        while(start <= end){
            
            mid = start + (end - start) / 2;
            
            int time = calcTime(piles, mid);
            
            if(time <= h){
                
                minSpeed = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
        
        return minSpeed;
    }
};