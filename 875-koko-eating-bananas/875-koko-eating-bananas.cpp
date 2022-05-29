class Solution {
public:
    
    int calcTime(vector<int> &piles, int mid){
        
         int sum = 0;
         
        for(int i=0;i<piles.size();i++)
        {
            sum+=(piles[i]/mid)+((piles[i]%mid)!=0);
        }
        return sum;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        
        int ans = 0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int time = calcTime(piles, mid);
            if(time<=h)
            {  
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
            
        }
        
        return ans;
    }
};