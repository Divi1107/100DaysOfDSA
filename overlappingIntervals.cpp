class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = 0;i<n;i++)
        {
            if(ans.empty()|| arr[i][0]>ans.back()[1])
            {
                ans.push_back(arr[i]);
            }
            else
            {
                //if its lying inside
                ans.back()[1] = max(ans.back()[1],arr[i][1]);
            }
        }

        return  ans;
    }
};
