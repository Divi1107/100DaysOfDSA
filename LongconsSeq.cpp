class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> ele;
        if(nums.empty()) return 0;
        int longest = 1;
        for(int i =0;i<n;i++)
        {
            ele.insert(nums[i]); //for set we use insert
        }
        for(auto it :ele)
        {
            if(ele.find(it-1)==ele.end())
            {
                int cnt = 1;
                int x = it;
                while(ele.find(x+1) != ele.end())
                {
                    cnt++;
                    x++;
                }
                 longest = max(longest,cnt);
            }
        }
        return longest;
    }
};
