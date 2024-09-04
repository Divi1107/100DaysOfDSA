//brute force
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
 void inorder(TreeNode* root,vector<int>& ans)
 {
    if(root==NULL) return;
    if(root != NULL) {
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
    } 
 }
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) return true;
        else  if(p == NULL||q == NULL) return false;
        else {
        vector<int> ans;
        vector<int> ans1;
        bool k = false;
        inorder(p,ans);
        inorder(q,ans1);
        for(int i = 0;i<ans.size();i++)
        {
            if(ans[i]==ans1[i])
            k = true;
            else
            {
                k = false;
                break;
            }
        }
        return k;}
    }
};
