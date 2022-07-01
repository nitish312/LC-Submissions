class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        priority_queue<pair<int, int>> pq;
        
        // to count how many boxes we picked till now
        int count = 0;
        
        // sort using no. of units in box = 2nd parameter
        for(auto i: boxTypes){
            
            pq.push({i[1], i[0]});
        }
        
        int units = 0;
        
        while(!pq.empty() && count < truckSize){
            
            int currBoxes = pq.top().second; // no. of current boxes
            int currBoxUnits = pq.top().first; // no. of units in current box
            
            if(count + currBoxes <= truckSize){
                
                count += currBoxes; 
                units += currBoxes * currBoxUnits;
            }
            else{ //curr boxes are more than required, so just take how many required
                
                int requiredBoxes = truckSize - count;
                // count += requiredBoxes;
                units += requiredBoxes * currBoxUnits;
                return units;
            }
            
            pq.pop();
        }
        
        return units;
    }
};