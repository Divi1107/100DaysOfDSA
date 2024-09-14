
class Solution {
  public:
    int maxLen(vector<int>& arr, int n) {
        int maxc = 0;
        for(int i =0;i<n;i++)
        {
            int sum = 0;
            int c = 0; 
            for(int j = i;j<n;j++)
            {
                sum = sum+arr[j];
                c++;
                if(sum==0)
                {
                  maxc = max(c,maxc);
                }
            }
        }
        return maxc;
    }
};
