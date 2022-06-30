class Solution {
public:
    void increaseThem(vector<int>& nums, int start, int mid, int& count){
        
        int end = mid - 1;
        for(int i=start; i<=end; i++){
            
            int ele = nums[i];
            count += nums[mid] - ele;
        }
    }
    
    void decreaseThem(vector<int>& nums, int end, int mid, int& count){
        
        int start = mid + 1;
        for(int i=start; i<=end; i++){
            
            int ele = nums[i];
            count += ele - nums[mid];
        }
    }
    
    int minMoves2(vector<int>& nums) {
        
        int n = nums.size();
        
        int count = 0;
        
        sort(nums.begin(), nums.end()); // O(N*logN)
        
        int mid = n / 2;
        
        increaseThem(nums, 0, mid, count);
        decreaseThem(nums, n-1, mid, count);
        
        return count;
    }
};