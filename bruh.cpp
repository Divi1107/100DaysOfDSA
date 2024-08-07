//medium lc
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int mi = nums[0];
        for(int i = 0 ; i<n;i++)
        {
            if(nums[i]<=mi)
            {
                mi = nums[i];
            }
        }
        return mi;
    }
};
