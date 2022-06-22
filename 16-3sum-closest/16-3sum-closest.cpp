class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int n = nums.size();
        if(n < 3) return 0;
        
        int sumAll = nums[0]+nums[1]+nums[2];
        
        sort(nums.begin(), nums.end());
        
        for(int first = 0 ; first < n-2 ; ++first)
        {
            // if(first > 0 && nums[first] == nums[first-1]) continue;
            
            int start = first+1;
            int end = nums.size()-1; 
            
            while(start < end)
            {
                int curSum = nums[first] + nums[start] + nums[end];
                if(curSum == target) return curSum;
                
                if( abs(target - curSum) < abs(target - sumAll)) sumAll = curSum;
                
                if(curSum < target) ++start;
                else --end;
            }
        }
        
        return sumAll;
    }
};