class Solution {
public:
    
    bool check(vector<int> &position, int mid, int m){
        
        int n = position.size(); //no of buckets
        int prev = 0; //idx of previous ball placed
        int cur = 1; //no of balls placed
        
        for(int i=1; i<n; i++){
            
            if(position[prev] + mid > position[i]) continue;
            else{
                
                prev = i;
                cur++;
            }
        }
        //cout<<cur;
        
        if(cur >= m) return true;
        else return false;
    }
    
    int maxDistance(vector<int>& position, int m) {
        
        sort(position.begin(), position.end());
        
        int start = 1; //minimum possible distance between any two balls
        int end = position.back() - position.front(), mid; //maxm possible distance between any two balls
        
        //we want to BS on minm possible distance between two balls
        while(start < end){
            
            mid = (start + end + 1)/2;
            //check if mid distance is possible as minm b/w two balls.
            //and all balls can be placed as such
            if(check(position, mid, m)) start = mid;
                //we want to maximise minm distance, so agar mid pe possible hai, set lo = mid
            else end = mid-1;
        }
        
        return start;
    }
};