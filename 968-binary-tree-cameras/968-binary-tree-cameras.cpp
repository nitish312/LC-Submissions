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
    
    int cameraCount = 0;
    int covered = 0;
    int pleaseCover = 1;
    int hasCamera = 2;
    
    int postOrder(TreeNode* root){
        
        if(!root) return covered;
        
        int left = postOrder(root->left);
        int right = postOrder(root->right);
        
        if(left == pleaseCover || right == pleaseCover){
            
            cameraCount++; 
            return hasCamera;
        } 
        else if(left == hasCamera || right == hasCamera) return covered;
        else return pleaseCover;
    }
    
    int minCameraCover(TreeNode* root) {
        
        return (postOrder(root) == pleaseCover) ? ++cameraCount : cameraCount;
        
        // return cameraCount;
    }
};