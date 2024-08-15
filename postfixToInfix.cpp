class Solution {
  public:
 
    string postToInfix(string s) {
        int i = 0; string t1,t2; string ans="";
        stack<string> st;
        int n = s.size();
        while(i<n)
        {
            if((s[i]>='a'&& s[i]<='z')||(s[i]>='A' && s[i]<='Z')||(s[i]>='0'&& s[i]<='9'))
            {
                st.push(string(1,s[i]));//push operand
            }
            else 
            {
                t1 = st.top();
                st.pop();
                t2 = st.top();
                st.pop();
                string str = '('+t2+s[i]+t1+')';
                st.push(str);
            }
            i++;
        }
        ans = st.top();
        return ans;
    }
};
