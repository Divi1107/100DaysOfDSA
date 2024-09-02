class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int kids = g.size();
        int cookies = s.size(); 
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int l=0,r=0;
        while(r<kids && l<cookies)
        {
            if(g[r]<=s[l])
            {
                r++;
            }
            l++;
        }
        return r;
    }
};
