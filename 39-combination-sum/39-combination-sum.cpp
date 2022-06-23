class Solution {
public:
    vector<vector<int>> ans;
    
    void help(vector<int> &can,int tar,int i,int curr,vector<int> &v)
    {
        if(curr == tar)
        {
            ans.push_back(v);
            return;
        }
        
        if(curr > tar || i<0) return;
   
        v.push_back(can[i]);
        help(can,tar,i,curr+can[i],v);
        
        v.pop_back();
        help(can,tar,i-1,curr,v);
    }
    
    vector<vector<int>> combinationSum(vector<int>& can, int tar) 
    {
        vector<int> v;
        help(can,tar,can.size()-1,0,v);
        return ans;
    }
};