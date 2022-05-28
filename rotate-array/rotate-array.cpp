class Solution {
public:
    void reverse(vector<int>& nums, int i, int j){
        
        int left = i; 
        int right = j;
        
        while(left < right){
            
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            
            left++;
            right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        k %= n;
        
        if(k < 0) k += n;
        
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }
};