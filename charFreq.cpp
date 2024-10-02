class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        vector<pair<int,char>>v;
        for(auto ch: s){
            mpp[ch]++;
        }
        for(auto i : mpp)
        {
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,char>>());
        string a = "";
        for(auto it : v)
        {
            while(it.first--)
            a = a + it.second;
        }
         return a;
    }
};
