class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        if(nums.size() < 4)       return ans; 
        for(int i=0;i<nums.size()-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])   continue;  // removes duplicates of i
            
            for(int j=i+1;j<nums.size()-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])   continue;   // removes duplicates of j
                
                int low=j+1,high=nums.size()-1;
                long long int remain=(long long int)target-nums[i]-nums[j];
                while(low < high)
                {
                    int sum=nums[low]+nums[high];
                    if(sum==remain){
                        vector<int> pairs;
                        pairs.push_back(nums[i]);
                        pairs.push_back(nums[j]);
                        pairs.push_back(nums[low]);
                        pairs.push_back(nums[high]);
                       
                        ans.push_back(pairs);
                    
                        while(low<high && nums[low]==nums[low+1])       low++;   // removes duplicates of low 
                        while(low<high && nums[high]==nums[high-1])     high--;  // removes duplicate of high
                    
                        low++;
                        high--;
                    }
                    else if(sum < remain)    low++;
                    else    high--;
                }
            }
        }
        return ans;
    }
};