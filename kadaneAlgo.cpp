//max sum in a subarray - better
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int maxx = INT_MIN; int sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            sum = sum+nums[i];
            maxx = max(maxx,sum);
            if(sum<0)
            {
                sum = 0;
            }
        }
        return maxx;
    }
};


//max sum in a subarray - brute
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int maxx = INT_MIN; int cnt = 0;
        for(int i = 0;i<nums.size();i++)
        {
            signed int sum = 0;
            for(int j = i;j<nums.size();j++)
            {
                sum = sum+nums[j];
                maxx = max(sum,maxx);
            }
        }
        return maxx;
    }
};
