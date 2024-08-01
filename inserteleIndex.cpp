class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ele;
        for(int i =0 ;i<nums.size()-1;i++)
        {
            if(nums[i]==target)
            {
                ele = i; break;
            }
            else
             {
                if(nums[i] < target && nums[i+1]>target)
                {
                    ele = i+1; break;
                }
             }
        }
        int n = nums.size();
        if(target>nums[n-1])
        {
            ele = n;
        }
        if(target<=nums[0])
        {
            ele = 0;
        }
        return ele;
    }
};
