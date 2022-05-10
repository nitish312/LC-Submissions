class Solution {
public:
    
    void help(vector<vector<int>>& res, vector<int>& comb, int k, int n, int sum, int num){
        
        if(sum==n && comb.size()==k){
            res.push_back(comb);
            return;
        }
        
        if(num >= 10 || sum<0){
            return;
        }
        
        comb.push_back(num);
        help(res, comb, k, n, sum+num, num+1);
        comb.pop_back();
        help(res, comb, k, n, sum, num+1);
    }
    
    vector<vector<int>> combinationSum3(int k, int n){
        
        vector<vector<int>> res;
        vector<int> comb;
        int sum = 0;
        help(res, comb, k, n, sum, 1);
        return res;
    }
};