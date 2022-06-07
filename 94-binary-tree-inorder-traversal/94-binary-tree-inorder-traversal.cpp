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
    
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> vec;
        
        stack<TreeNode*> stk;
        
        TreeNode* curr = root;
        
        while(!stk.empty() || curr){
            
            if(curr){
                
                stk.push(curr);
                curr = curr->left;
            }
            else{
                
                curr = stk.top();
                stk.pop();
                vec.push_back(curr->val);
                curr = curr->right;
            }
        }
        
        return vec;
    }
};