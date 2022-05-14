class Solution {
public:
    
    
    #define pii pair<int , int>
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        priority_queue<pii , vector<pii> , greater<pii>>pq;
       vector<pair<int , int>>adj[n+1];
        for(int i=0 ; i<times.size() ; i++){
            adj[times[i][0]].push_back({times[i][1] , times[i][2]});
        }
        
        
        pq.push({0 , k});
        
        vector<int>dist(n+1 , INT_MAX);
        dist[k]=0;
        while(!pq.empty()){
            auto dis = pq.top().first;
            auto node = pq.top().second;
            pq.pop();
            
            vector<pair<int , int>>::iterator it;
           for(it = adj[node].begin() ; it!=adj[node].end() ; ++it){
               if(dist[it->first]>dis + it->second){
                   dist[it->first]=dis + it->second;
                   pq.push({dist[it->first] , it->first});
               }
           } 
            
        }
            int d = INT_MIN;
            for(int i=1 ; i<dist.size() ; i++){
                d = max(dist[i] , d);
                if(dist[i]==INT_MAX)
                    return -1;
            }
        return d;
    }
};