/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:   
    
//     int cameraCount = 0;
//     set<TreeNode*> covered; // covered means the node is in the range of camera
    
//     void postOrderDFS(TreeNode* curr, TreeNode* parent){ 
//         // we're checking from leaf to root otherwise we may put extra cameras 
//         // because as we increase levels in tree, leaf nodes also increases
        
//         if(curr){ // curr node is not null / ues, there is a node
            
//             // we'll go to its childs with curr node as their parent 
//             postOrderDFS(curr->left, curr); 
//             postOrderDFS(curr->right, curr);
            
//             // now we've to add the camera to curr node IF
//             // 1. curr's parent is null & curr itself is uncovered OR IF
//             // 2. any one of its child is uncovered
//             if( !parent && covered.find(curr) == covered.end() || 
//                 covered.find(curr->left) == covered.end() || 
//                 covered.find(curr->right) == covered.end() ){
                
//                 cameraCount++; 
                
//                 // now we've to add curr, its parent and childs in our hashset
//                 covered.insert(curr);
//                 covered.insert(parent);
//                 covered.insert(curr->left);
//                 covered.insert(curr->right);
//             }
//         }
//     }
    
//     int minCameraCover(TreeNode* root){
        
//         if(!root) return 0;
        
//         covered.insert(NULL); 
//         // added NULL so we are inserting the children of our leaf nodes into covered category otherwise it would put camera on leaf nodes
        
//         postOrderDFS(root, NULL); 
//         // root doesn't have any parent 
//         // if our current node is not covered, its parent will get a camera
        
//         return cameraCount;
//     }
    
    int res = 0;
    int minCameraCover(TreeNode* root) {
        return (dfs(root) < 1 ? 1 : 0) + res;
    }

    int dfs(TreeNode* root) {
        if (!root) return 2;
        int left = dfs(root->left), right = dfs(root->right);
        if (left == 0 || right == 0) {
            res++;
            return 1;
        }
        return left == 1 || right == 1 ? 2 : 0;
    }
};