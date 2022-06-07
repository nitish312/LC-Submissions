class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        int prefix[n], suffix[n];
        
        int first = 0;
        prefix[first] = height[first];
        for(int i=1; i<n; i++){
            
            int curr = i, prev = i - 1;
            prefix[curr] = max(prefix[prev], height[curr]);
        }
        
        int last = n - 1;
        suffix[last] = height[last];
        for(int i=n-2; i>=0; i--){
            
            int curr = i, prev = i + 1;
            suffix[curr] = max(suffix[prev], height[curr]);
        }
        
        int trappedWaterSum = 0;
        
        for(int i=0; i<n; i++){
            
            trappedWaterSum += min(prefix[i], suffix[i]) - height[i];
        }
        
        return trappedWaterSum;
    }
};