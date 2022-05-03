class Solution {
public:
    
    int countHelper(vector<int>& vec){
        
        int start = 0;
        int end = vec.size() - 1;
        
        while(start <= end){
            
            int mid = start + (end - start) / 2;
            
            if (vec[mid] >= 0) start = mid + 1;
            else end = mid - 1;
        }
        // high is the index for the last non-negative number
        // high + 1 is the number of non-negative numbers
        // size - (high + 1) is the number of negative numbers
        return vec.size() - end - 1;
    }    
    
    int countNegatives(vector<vector<int>>& grid) {
        
        int count = 0;
        
        for(int i=0; i<grid.size(); i++){
            
            count += countHelper(grid[i]);
        }
        
        return count;
    }
};