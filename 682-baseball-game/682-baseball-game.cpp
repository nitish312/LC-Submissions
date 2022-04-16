class Solution {
public:
    int calPoints(vector<string>& ops) {
        
        stack<int> stk;
        int sum = 0;
        
        for(string s: ops){
            
            if(s=="C"){ // remove the previous score
                stk.pop();
            }
            else if(s=="D"){ // double the previous score and add it to stack
                stk.push(2*stk.top());
            }
            else if(s=="+"){ // add previous two scores and add it to stack
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.push(a);
                stk.push(a+b);
            }
            else{ // add all remaining elements of vector to stack 
                stk.push(stoi(s)); // stoi() to convert string into integer  
            }
        }

        while(!stk.empty()){ // adding all elements in our stack
            
            sum += stk.top();
            stk.pop();
        }
        
        return sum;
    }
};