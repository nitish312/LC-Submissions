class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> charMatrix;
        
        int n = s.size();
        
        for(auto ch : s)
        {
            charMatrix[ch]++;
        }
        
        for(int i=0; i<n; i++)
        {
            if(charMatrix[ s[i] ] == 1) return i;
        }
        
        return -1;
    }
};