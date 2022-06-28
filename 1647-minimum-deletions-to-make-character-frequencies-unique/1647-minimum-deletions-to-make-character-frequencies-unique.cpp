class Solution {
public:
    int minDeletions(string s) {
        
        int deletions = 0;
        
        unordered_map<char, int> char_counts;
        
        for(auto ch: s) char_counts[ch]++;
        
        unordered_set<int> seen;
        
        for(auto i: char_counts){
            
            int charFreq = i.second;
            while(seen.find(charFreq) != seen.end()){
                
                charFreq--;
                deletions++;
            }
            
            if(charFreq > 0) seen.insert(charFreq);
        }
        
        return deletions;
    }
};