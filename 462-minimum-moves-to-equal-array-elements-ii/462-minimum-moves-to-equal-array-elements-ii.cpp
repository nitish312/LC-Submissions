class Solution {
public:
    
    int count = 0;
    
    void increaseThem(vector<int>& nums, int start, int end, int mid){
        
        for(int i=start; i<=end; i++){
            
            int ele = nums[i];
            count += nums[mid] - ele;
        }
    }
    
    void decreaseThem(vector<int>& nums, int start, int end, int mid){
        
        for(int i=start; i<=end; i++){
            
            int ele = nums[i];
            count += ele - nums[mid];
        }
    }
    
    int minMoves2(vector<int>& nums) {
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end()); // O(N*logN)
        
        int mid = n / 2;
        
        increaseThem(nums, 0, mid-1, mid);
        decreaseThem(nums, mid+1, n-1, mid);
        
        return count;
    }
};