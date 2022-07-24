class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        long long prev, sum;
        prev = sum = 0;
        
        for(int i=0; i<n; i++){
            
            long long diff = nums[i] - prev;
            
            if(diff > 1){
                
                long long x = prev;
                long long y = nums[i] - 1;
                
                if(diff > k){
                    y = x + k;
                }
                
                sum += (y * (y + 1) / 2) - (x * (x + 1) / 2);
                k -= diff - 1;
                
                if(k <= 0) break;
            }
            
            prev = nums[i];
        }
        
        if(k > 0){
            
            long long x = nums[n - 1];
            long long y = x + k;
            
            sum += (y * (y + 1) / 2) - (x * (x + 1) / 2);
        }
        
        return sum;
    }
};