class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        if(rows ==0 || cols == 0) return false;
        
        int start = 0, end = rows * cols - 1;
        while(start <= end){
            
            int mid = start + (end - start) / 2;
            
            int index = matrix[mid / cols][mid % cols];
            
            if(index == target) return true;
            else if(index < target) start = mid + 1;
            else end = mid - 1;
        }
        
        return false;
        
    }
};