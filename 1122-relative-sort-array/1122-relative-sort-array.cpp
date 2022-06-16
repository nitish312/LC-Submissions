class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
         
        map<int, int> mp;
        
        int n1 = arr1.size();
        for(int i=0; i<n1; i++) mp[arr1[i]]++;
        
        int start = 0;
        int n2 = arr2.size();
        for(int j=0; j<n2; j++){
            
            while(mp[arr2[j]]-- > 0){
                
                arr1[start++] = arr2[j];
            }
        }
        
        for(auto a: mp){
            
            while(a.second-- > 0){
                
                arr1[start++] = a.first;
            } 
        }
        
        return arr1;
    }
};