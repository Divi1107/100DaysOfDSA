class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> v(2,-1); int count=0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                v[0]=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                 v[1]=i;
                 break;
            }
        }
        return v;
    }
};
