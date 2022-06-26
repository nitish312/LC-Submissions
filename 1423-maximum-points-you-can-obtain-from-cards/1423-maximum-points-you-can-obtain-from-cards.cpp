class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int n = cardPoints.size();
        
//         int sum = 0;
//         int start = 0, end = n - 1;
//         while(start < end){
            
//             // int left = cardPoints[start];
//             // int right = cardPoints[end];
//             while(k--){
                
// //                 if(cardPoints[start] == cardPoints[end]) sum += cardPoints[start]; // if both are same, take any one
// //                 else if(cardPoints[start] < cardPoints[end]) sum += cardPoints[end];
// //                 else if(cardPoints[start] > cardPoints[end]) sum += cardPoints[start];

// //                 start++;
// //                 end--;
                
//                 if(cardPoints[start] == cardPoints[end]){
                    
//                     sum += cardPoints[start];
//                     start++;
//                     end--;
//                 }
//                 else if(cardPoints[start] < cardPoints[end]){
                    
//                     start = end - k;
//                     for(int i=start; i<=end; i++){
                        
//                         sum += cardPoints[i];
//                     }
//                     break;
//                 }
//                 else{
                    
//                     end = start + k;
//                     for(int i=start; i<=end; i++){
                        
//                         sum += cardPoints[i];
//                     }
//                     break;
//                 }
//             }
//         }
        
//         return sum;
        
        vector<int> preSumFromFront(n+1, 0);
        vector<int> preSumFromBack(n+1, 0);
        
        int sum = 0;
        for(int i=0; i<n; i++){
            
            sum += cardPoints[i];
            preSumFromFront[i+1] = sum;
        }
        
        sum = 0;
        for(int i=n-1; i>=0; i--){
            
            sum += cardPoints[i];
            preSumFromBack[i] = sum;
        }
        
        reverse(preSumFromBack.begin(), preSumFromBack.end());
        
        int ans = 0;
        
        for(int i=0; i<=k; i++){
            
            ans = max(ans, preSumFromFront[i] + preSumFromBack[k - i]);
        }
        
        return ans;
    }
};