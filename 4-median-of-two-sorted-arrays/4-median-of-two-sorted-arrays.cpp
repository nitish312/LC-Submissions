class Solution {
public:
    
    
        
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        
        int m,n;
        m=nums1.size();
        n=nums2.size();
        int i,j,k;
        vector<int> nums3(m+n,0);
        i=j=k=0;
        double median;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j]){
                nums3[k] = nums1[i];
                k++;
                i++;

            }
            else{
                nums3[k] = nums2[j];
                k++;
                j++;
            }
        }
        
        if (i==m){
            while(j<n)
            {
             nums3[k] = nums2[j];
             k++;
             j++;
            }
        }
        else
        {
         while(i<m)
            {
             nums3[k] = nums1[i];
             k++;
             i++;
            }   
        }

        if((m+n)%2 != 0){
           median = nums3[(m+n)/2];

        }
        else{
            median = ((double) (nums3[(m+n)/2] + nums3[((m+n)/2)-1]))/2;

        }
        return median;
           
    }
};