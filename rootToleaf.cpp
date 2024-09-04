void func(Node* root,vector<vector<int>>& ans,vector<int> a)
{
    if(root==NULL) return;
    a.push_back(root->data);
    if(root->right == NULL && root->left ==NULL)
    {
        ans.push_back(a);
    }
    func(root->left,ans,a);
    func(root->right,ans,a);
    a.pop_back();
}
class Solution {
  public:
    vector<vector<int>> Paths(Node* root) {
      vector<vector<int>>ans;
      vector<int> a;
      if(root==NULL) return ans;
      func(root,ans,a);
      return ans;
    }
};
