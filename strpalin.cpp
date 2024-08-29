class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        sort(strs.begin(),strs.end());
        int m = strs[0].length();
        for(int i =0;i<m;i++)
        {
            if(strs[0][i] == strs.back()[i])
            res.push_back(strs[0][i]);
            else
            break;
        }
        return res;
    }
};
