#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> ans;
        
        for(int i=0; i<numbers.size()-1; i++){
            
            int start = i+1, end = numbers.size() - 1, gap = target - numbers[i];
            while(start <= end){
                
                int mid = start + (end - start) / 2;
                if(numbers[mid] == gap){
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    break;
                }
                else if(numbers[mid] < gap) start = mid + 1;
                else end = mid - 1;
            }
        }
        
        return ans;
    }
};