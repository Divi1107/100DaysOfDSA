class Solution {
public:
    int conv(char s)
    {
        if(s == 'I') return 1;
        else if(s == 'V') return 5;
        else if(s == 'X') return 10;
        else if(s == 'L') return 50;
        else if(s == 'C') return 100;
        else if(s == 'D') return 500;
        else if(s == 'M') return 1000;
        else return 0;
    }
    int romanToInt(string s) {
        int sum = 0; int val;
        for(int i=0;i<s.size();i++)
        {
            if(conv(s[i])<conv(s[i+1])) 
            sum = sum-conv(s[i]);
            else
            sum = sum+conv(s[i]);
        }
        return sum;
    }
};
