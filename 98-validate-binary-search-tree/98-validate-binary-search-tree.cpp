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
    
    bool isBST(TreeNode* root, long minKey, long maxKey){
        
        if(!root) return true;
        
        int rootVal = root->val;
        
        if(rootVal <= minKey || rootVal >= maxKey) return false;
        
        return isBST(root->left, minKey, rootVal) &&
               isBST(root->right, rootVal, maxKey);
    }
    
    bool isValidBST(TreeNode* root) {
        
        return isBST(root, LONG_MIN, LONG_MAX);
    }
};