class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map<int,int> mp; int data;
        for(int i = 0; i< nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second==1)
            {
                data = it->first;
            }
        }
        return data;
    }
};
