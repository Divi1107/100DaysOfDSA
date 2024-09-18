class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx = 0; int cnt = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                cnt++;
                maxx = max(cnt,maxx);
            }
            else  cnt = 0;
        } return maxx;
    }
};
