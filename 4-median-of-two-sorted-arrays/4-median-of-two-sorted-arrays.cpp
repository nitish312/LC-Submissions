class Solution {
public:
    
    double findMedian(vector<int>&nums1, vector<int>&nums2){
        
        int m = nums1.size();
        int n = nums2.size();
        if(m > n)
            return findMedian(nums2, nums1);
        int low = 0, high = m;
        
        while(low <= high){
            
            int partx = low + (high - low) / 2;
            int party = (m + n + 1) / 2 - partx;
            int maxlx = (partx == 0) ? INT_MIN : nums1[partx - 1];
            int minrx = (partx == m) ? INT_MAX : nums1[partx];
            int maxly = (party == 0) ? INT_MIN : nums2[party - 1];
            int minry = (party == n) ? INT_MAX : nums2[party];
            
            if(maxlx <= minry && maxly <= minrx){
                if((m + n) % 2 == 0)
                    return (double)(max(maxlx,maxly)+min(minrx,minry)) / 2;
                else
                    return (double)(max(maxlx,maxly));
            }
            else if(maxlx > minry)
                high = partx - 1;
            else
                low = partx + 1;
        }
        return -1.0;
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        
        double ans;
        
        ans = findMedian(nums1, nums2);
        
        return ans;   
    }
};