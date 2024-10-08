class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans1;
        sort(nums.begin(),nums.end());
        int n = nums.size(); 
        int sum; int i = 0; 
        for( i = 0;i<n;i++)
        {
            if(i != 0 && nums[i]==nums[i-1]) continue;
            int j = i+1;int k = n-1;
            while(j<k)
            {
            sum = nums[i]+nums[j]+nums[k];
            if(sum==0)
            {
                vector<int> temp = {nums[i],nums[j],nums[k]};
                sort(temp.begin(),temp.end());
                ans1.push_back(temp);
                j++; k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k] == nums[k+1]) k--;
            }
            else if(sum>0)
            {
                k--;
            }
            else j++;
        }}
        return ans1;
    }
};
