class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0;
        int count2 = 0;
        int ele1 = 0;
        int ele2 = 0;
        vector<int> ans;
        for(int i =0;i<nums.size();i++)
        {
            if(count1 == 0 && ele2!=nums[i])
            {
                count1 = 1;
                ele1 = nums[i];
            }
            else if(count2 == 0 && ele1 != nums[i])
            {
                count2 = 1;
                ele2 = nums[i];
            }
            else if(ele1 == nums[i]) count1++;
            else if(ele2 == nums[i]) count2++;
            else 
            {
                count1--,count2--;
            }
        }
        count1 = 0, count2 = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(ele1 == nums[i]) count1++;
            if(ele2 == nums[i]) count2++;
        }
        if(ele1==0 & ele2 == 0)
        {
            ans.push_back(0);
             //ans.push_back(0);
             return ans;
        }
        int minn = (int)((nums.size())/3)+1;
        if(count1>=minn) ans.push_back(ele1);
        if(count2>=minn) ans.push_back(ele2);
        sort(ans.begin(),ans.end());
        
        return ans;

    }
};
