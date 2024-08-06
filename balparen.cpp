class Solution {
public:
    stack<char> s1;
    bool isValid(string s) {
        if(s.length()==0)
        return true;
        for(int i = 0;i<s.length();i++)
        {
            //to store in stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                s1.push(s[i]);
            }
             else
             { if(s1.empty())
             {
                return false;
             }
             char ch = s1.top();
              s1.pop();
             if((s[i]==')' && ch =='(')|| (s[i]==']' && ch =='[')|| (s[i]=='}' && ch == '{'))
            {
               //return true;
               continue;
            }
            else
            {
                return false;
            }}
        }
        return s1.empty();
    }
};
