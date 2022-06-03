class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();
        
        string str = "";
        
        for(int i=0; i<n; i++){
            
            if(isalnum(s[i])) str.push_back(tolower(s[i]));
        }
        
        int size2 = str.size();
        int halfWay = size2 / 2;
        int lastEle = size2 - 1;
        
        for(int i=0; i<halfWay ;i++){
            
            if(str[i] != str[lastEle - i]) return false;
        }
                
        return true;
    }
};