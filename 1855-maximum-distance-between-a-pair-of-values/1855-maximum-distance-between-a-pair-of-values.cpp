class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        
        int ans = 0;
        
        int n = nums1.size();
        
        for(int i=0; i<n; i++){
            
            int start = 0, end = nums2.size() - 1, mid;
            
            while(start <= end){
                
                mid = start + (end - start) / 2;
                
                if(nums2[mid] < nums1[i]) end = mid - 1;
                else start = mid + 1;
            }
            
            if(end < 0) continue;
            
            ans = max(ans, end - i);
        }
        
        return ans;
    }
};