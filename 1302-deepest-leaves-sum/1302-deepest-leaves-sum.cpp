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
    
    int d = INT_MIN;
    int sum = 0;
    
    void fullSum(TreeNode *root,int level){
        
        if(root == NULL) return;
        
        if(level > d){
            sum = root->val;
            d = level;
        }
        else if(level == d){
            sum = sum + root->val;
        }
        
        fullSum(root->left, level+1);
        fullSum(root->right, level+1);
    }
    
    int deepestLeavesSum(TreeNode* root){
        
        fullSum(root,0);
        
        return sum;
    }
};