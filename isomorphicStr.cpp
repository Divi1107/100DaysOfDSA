class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2;
        //bool ans = false;
        for(int i= 0 ; i<s.size();i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

   for(int i= 0 ; i<s.size();i++) {
       
            if(mp1[s[i]] != mp2[t[i]]) 
            {
                // ans = false;
                // break;
                return false;
            }
            // else
            // ans = true;
        }
        return true;
    }
};
