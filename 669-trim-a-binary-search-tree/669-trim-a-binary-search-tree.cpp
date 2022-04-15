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
        
    TreeNode* trim(TreeNode* root, int low, int high){
        
        if(!root) return NULL; //1
        
        TreeNode* left_node = trim(root->left, low, high); //2
        if(left_node != root->left){ //3
            root->left = left_node;
        }
        
        TreeNode* right_node = trim(root->right, low, high); //2
        if(right_node != root->right){ //3
            root->right = right_node;
        }
        
        // if value does not lie between range, we will return its child node
        if(root->val > high || root->val < low){ //5  
            return (root->left) ? root->left : root->right;
        }
        
        // if value lies between range, we will return root node
        return root; //4
        
    }
    
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        
        return trim(root, low, high);
        
    }
};