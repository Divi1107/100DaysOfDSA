class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i = 0;i<nums.size();i++)
        {
            int com = target-nums[i];
            if(mpp.count(com))
            {
                return {mpp[com],i};
            }
            mpp[nums[i]] = i;
        }
        return {};
    }
};
