/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
//vector<int> a,b,c;
void inorder(TreeNode *root,vector<int>& ans)
{
   
    if(root == NULL) return;
    if(root!=NULL)
    {
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
}
void preorder(TreeNode *root, vector<int>& ans)
{
    if(root == NULL) return;
    if(root!=NULL)
    {
        ans.push_back(root->data);
        preorder(root->left,ans);
        preorder(root->right,ans);
    }
}
void postorder(TreeNode *root, vector<int>& ans)
{
    if(root == NULL) return;
    if(root!=NULL)
    {
        postorder(root->left,ans);
        postorder(root->right,ans);
        ans.push_back(root->data);
    }
}
vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    vector<int>a,b,c;
    inorder(root,a);
    preorder(root,b);
    postorder(root,c);
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    return ans;
}
