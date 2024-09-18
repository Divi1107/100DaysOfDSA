class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());int miss;
        for(int i = 0;i<nums.size();i++)
        {
            if(i!=nums[i])
            {
                miss = i; break;
            }
        } return miss;
    }
};
