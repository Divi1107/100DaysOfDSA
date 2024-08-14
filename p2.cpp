class Solution {
public:
    string largestOddNumber(string num) { 
        int i = num.size()-1;
        while(i>=0 && ((num[i]-'0')&1)==0)
        i--;
        return num.substr(0,i+1);           
    }
};
