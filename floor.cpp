class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        int ans;
        if(v[0]>x)
        {
            return ans = -1;
        }
        for(long long i=0;i<n;i++)
        {
            if(x<v[i])
            {
                return ans = i-1;
             //   break;
            }
        }
        return n-1;
    }
};
