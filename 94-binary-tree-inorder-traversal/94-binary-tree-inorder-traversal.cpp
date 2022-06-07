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
    
    void inorder(TreeNode* root, vector<int> &vec){
        
        if(!root) return;
        
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        
//         vector<int> ans;
        
//         stack<TreeNode*> st;
        
//         while(root || !st.empty()){
            
//             while(root){
                
//                 st.push(root);
//                 root = root->left;
//             }
        
//             root = st.top();
//             st.pop();
//             ans.push_back(root->val);

//             root = root->right;
//         }
        
//         return ans;
        
        vector<int> vec;
        
        inorder(root, vec);
        
        return vec;
    }
};