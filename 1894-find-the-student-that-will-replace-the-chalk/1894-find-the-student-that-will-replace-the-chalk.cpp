class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        int n = chalk.size();
        
        long long int sum = 0, mid;
        
        vector<long long int>v(n, 0);
        
        for(int i=0; i<n; i++){
            
            sum += chalk[i];
            v[i] = sum;
        }
        
        k %= sum;
        
        int start = 0, end = n-1;
        while(start <= end){
            
            mid = start + (end - start) / 2;
            
            if(v[mid] == k) return mid + 1;
            else if(v[mid] < k) start = mid + 1;
            else end = mid - 1; 
        }
        
        return start;
    }
};