class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero,count =0;
        int n = nums.size();
        for(auto i =nums.begin();i!=nums.end();)
        {
            if((*i)==0)
            {
                zero =*i;
                i = nums.erase(i);
                count++;
            }
            else
            {
                ++i;
            }
        }
        nums.insert(nums.end(),count,0);
        for (auto i: nums)
        cout<<i;
    }
};
