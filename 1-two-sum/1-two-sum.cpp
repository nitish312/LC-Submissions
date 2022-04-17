#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<pair<int, int>> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = make_pair(nums[i], i);
        }
        
        sort(ans.begin(), ans.end());
        
        int left = 0, right = n-1;
        while(left < right){
            int sm = ans[left].first + ans[right].first;
            if(sm == target){
                return {ans[left].second, ans[right].second};
            }
            else if(sm > target){
                right -= 1;
            }
            else{
                left += 1;
            }
        }
        
        return {};        
    }
};