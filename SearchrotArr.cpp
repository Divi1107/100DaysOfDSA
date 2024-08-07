class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool count = false;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                count = true;
                break;
            }
        }
        return count;
    }
};
//beats 80% lol
