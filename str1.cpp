class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        string res; int bb =0;
        for(int i =0;i<n;i++)
        {
            if(s[i]=='('){
                if(bb>0)
                {
                    res = res+s[i];
                }bb++;
            }
            else{
                bb--;
                if(bb>0)
                {
                    res = res + s[i];
                }
            }
        }
        return res;
    }
};
