class Solution {
  public:
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans,a;
        if(n==1) return {0,arr[0]};
        a = subsetSums(arr,n-1);
        for(int i = 0;i<a.size();i++)
        {
            ans.push_back(a[i]);
            ans.push_back(a[i]+arr[n-1]);
        }
        return ans;
    }
};
