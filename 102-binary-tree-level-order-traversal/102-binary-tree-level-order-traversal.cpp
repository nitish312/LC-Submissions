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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        if(!root) return {};
        
        vector<vector<int>> mainVec;
        vector<int> rowVec;
        
        queue<TreeNode*> q;
        q.push(root);
        
        int level = 1;
        while(!q.empty()){
            
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
            
            rowVec.push_back(curr->val);
            level--;
            
            if(level == 0){
                mainVec.push_back(rowVec);
                rowVec.clear();
                level = q.size();
            }
        }
        
        return mainVec;
    }
};