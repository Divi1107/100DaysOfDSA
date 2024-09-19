//subarray optimal - kadanes algo
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro1 = nums[0],pro2 = nums[0], res = nums[0];
        for(int i =1;i<nums.size();i++)
        {
            int temp = max({nums[i],pro1*nums[i],pro2*nums[i]});
            pro2 = min({nums[i],pro1*nums[i],pro2*nums[i]});
            pro1 = temp;
            res = max(res,pro1);
        }
        return res;
    }
};

//subarray produxts - brute O(N2)
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxx = 0;
        int n = nums.size();
        if(n==1) return nums[0];
        for(int i = 0;i<n;i++)
        {
            int pro = 1;
            for(int j = i;j<n;j++)
            {
                pro = pro*nums[j];
                maxx = max(maxx,pro);
            }
        }
        return maxx;

    }
};
