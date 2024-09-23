//optimal
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        int sum = 0;
        int count=0;
        mpp[0] = 1;
        for(int i = 0;i<nums.size();i++)
        {
            sum = sum + nums[i];
            int rem = sum - k;
            count = count + mpp[rem];
            mpp[sum] = mpp[sum]+1;
        }
        return count;
    }
};
