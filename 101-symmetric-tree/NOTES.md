bool isSymmetric(TreeNode* root) {
if(!root)
return true;
return check(root->left , root->right);
}
bool check(TreeNode *l , TreeNode* r)
{
if(l || r)
{
if( (l && !r ) || (!l && r))
return false;
if(l->val!=r->val)
return false;
return check(l->left , r->right) && check(l->right , r->left);
}
return true;
}