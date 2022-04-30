class Solution {
public:
    
    double solve(unordered_map<string, vector<pair<string, double>>> &adj_list, unordered_set<string> &s, string a, string b){
        
	//If we not able to reach then return -1;
        if(adj_list.find(a)==adj_list.end()||adj_list.find(b)==adj_list.end())
        {
            return -1.0;
        }
		//If we reach destination return 1.0 as base case
        if(a==b)
        {
            return 1.0;
        }
		//insert in set that these nodes are visited
        s.insert(a);
        
        for(auto it:adj_list[a])
        {
		//start traversing into the addj_list that they are connected
            if(s.count(it.first)==0)
            {
			
			//move to next postion
                double res= solve(adj_list,s,it.first,b);
                if(res!=-1)
                {
				//Multiply every situation to find valid answer
                    return res*it.second;
                }
            }
            
        }
        return -1.0;
    }
    
    
    
    
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        //Creating unodred_map to store value
        unordered_map<string,vector<pair<string,double>>>adj_list;
        int n=equations.size();
        for(int i=0;i<n;i++)
        {
		//Putting nodes into the given style
            adj_list[equations[i][0]].push_back({equations[i][1],values[i]});
            adj_list[equations[i][1]].push_back({equations[i][0],1.0/values[i]});
        }
        
        vector<double>ans;
        for(int i=0;i<queries.size();i++)
        {
		//Unordered_set for visited nodes
            unordered_set<string>vis;
			//Solving each querry and store it in the ans
           double res=solve(adj_list,vis,queries[i][0],queries[i][1]);
            ans.push_back(res);
        }
        return ans;
        
    }
};