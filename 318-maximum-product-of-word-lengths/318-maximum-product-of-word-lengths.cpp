class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        vector<int> arr(words.size());
        
        int ans = 0, s1, s2;
        
        for(int i=0; i<words.size(); i++){
            
            s1 = words[i].size();
            
            for(int j=0; j<s1; j++){
                
                arr[i] |= 1<<(words[i][j] - 'a');
            }
            
            for(int j=0; j<i; j++){
                
                s2 = words[j].size();
                
                if((arr[i] & arr[j]) == 0) ans = max(ans, s1*s2);
            }
        }
        
        return ans;
    }
};