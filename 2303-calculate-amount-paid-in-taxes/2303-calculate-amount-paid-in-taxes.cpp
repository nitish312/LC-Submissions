class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        
        double tax=0; int prev=0;
        for(int i=0; i<brackets.size(); i++){
            if((brackets[i][0]-prev)<income){
                tax+=((double)(brackets[i][0]-prev)*brackets[i][1])/100;
                income-=(brackets[i][0]-prev);
            }
            else{
                tax+=((double)(income)*brackets[i][1])/100;
                return tax;
            }
            prev=brackets[i][0];
        }
        return tax;
    }
};