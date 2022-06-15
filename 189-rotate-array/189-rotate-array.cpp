class Solution {
public:
    
    void reverseIt(vector<int>& nums, int start, int end){
        
        while(start <= end) swap(nums[start++], nums[end--]);
    }
    
    void rotate(vector<int>& nums, int k){
        
        int n = nums.size();
        
        k %= n;
        
        int start = 0, end = n - 1;
        
        reverseIt(nums, start, end - k);
        reverseIt(nums, n - k, end);
        reverseIt(nums, start, end);
    }
};