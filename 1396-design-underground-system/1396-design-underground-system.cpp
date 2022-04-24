class UndergroundSystem {
public:
    
    unordered_map<string, pair<int, int>> avg;
    unordered_map<int, pair<string, int>> entry;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        entry[id] = {stationName, t}; 
    }
    
    void checkOut(int id, string stationName, int t) {
        string station1 = entry[id].first;
        
        avg[station1 + "-" + stationName].first += t - entry[id].second;
        avg[station1 + "-" + stationName].second += 1;
    }
    
    double getAverageTime(string startStation, string endStation) {
        string travel = startStation + "-" + endStation;
        
        double avgTime = avg[travel].first / (double)avg[travel].second;
        
        return avgTime;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */