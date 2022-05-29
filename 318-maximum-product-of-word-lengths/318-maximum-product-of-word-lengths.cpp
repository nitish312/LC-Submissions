class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int n = words.size();
        
        int arr[n];
		// 26 chars so if one char occurs then make 1 in binary string and other places will be 0
        for(int i=0; i<n; i++){
            
            int cur = 0;
			// making a binary number of each string
            for(int j=0; j<words[i].size(); j++){
                
                int nm = words[i][j] - 'a';
                cur = cur | 1<<nm;
            }
            
            arr[i] = cur;
        }
        
        int res = 0;
        for(int i=0; i<n; i++){
            
            for(int j=i+1; j<n; j++){
                
			// if two numbers have a common string then their bitwise and will be a non-zero number
                if( (arr[i]&arr[j]) == 0 ){
                    
                    int val = words[i].size() * words[j].size();
					//store the max lenght product
                    res = max(res, val);
                }
            }
        }
        
        return res;
    }
};