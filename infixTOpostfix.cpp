class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int prio(char op)
    {
        if(op=='^') return 3;
        else if(op=='*'|| op=='/') return 2;
        else if(op=='+'|| op=='-') return 1;
        else return -1;
    }
    string infixToPostfix(string s) {
        int i = 0;
        string res ="";
        stack<char> st;
        int n = s.size();
        while(i<n)
        {
            //if its an operand
            if((s[i]>='a'&& s[i] <= 'z')||(s[i]>='A'&& s[i] <= 'Z')||(s[i]>='0'&& s[i] <= '9'))
            {
                res = res +s[i];
            }
            else if(s[i]=='(')
            {
                st.push(s[i]);
            }
            else if(s[i]==')')
            {
                //pop out from stack
                while(!st.empty() && st.top()!='(')
                {
                    res = res+st.top();
                    st.pop();
                }
                st.pop(); //pop (
            }
            else 
            {
                while(!st.empty() && prio(s[i])<=prio(st.top()))
                {
                    res = res + st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }
        while(!st.empty())
        {
            res = res + st.top();
            st.pop();
        }
        return res;
    }
};
