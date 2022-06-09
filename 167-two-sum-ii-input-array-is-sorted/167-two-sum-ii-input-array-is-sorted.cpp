#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
//         vector<int> ans;
        
//         for(int i=0; i<numbers.size()-1; i++){
            
//             int start = i+1, end = numbers.size() - 1, gap = target - numbers[i];
//             while(start <= end){
                
//                 int mid = start + (end - start) / 2;
//                 if(numbers[mid] == gap){
//                     ans.push_back(i+1);
//                     ans.push_back(mid+1);
//                     break;
//                 }
//                 else if(numbers[mid] < gap) start = mid + 1;
//                 else end = mid - 1;
//             }
//         }
        
//         return ans;
        
        vector<int> ans;
        
        int n = numbers.size();
        
        int start = 0, end = n - 1;
        while(start < end){
            
            int firstEle = numbers[start];
            int lastEle = numbers[end];
            int sum = firstEle + lastEle;
            if(sum == target){
                
                ans.push_back(start+1);
                ans.push_back(end+1);
                break;
            }
            else if(sum < target) start++;
            else end--;
        }
        
        return ans;
    }
};