class Solution {
public:
    vector<int> genRow(int row)
    {
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1);
        for(int col = 1;col<row;col++)
        {
            ans = ans *(row-col);
            ans = ans/(col);
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int n) {
       vector<vector<int>> ans;
       for(int i = 1;i<=n;i++)
       {
           ans.push_back(genRow(i)); 
       }
       return ans;}
};
