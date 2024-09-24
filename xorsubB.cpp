//xor subset sum - brute

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class soln {
    public: int xorsub(vector<int>& nums,int k)
    {
        int count = 0;
        //int maxx = 0;
       for(int i = 0;i<nums.size();i++)
       {    int xxor = 0;
           
           for(int j = i;j<nums.size();j++)
           {
               xxor = xxor ^ nums[j];
               if(xxor == k)
               {
                   count++;
               }
           }
       }
       return int(count);
    }
};

int main()
{
    vector<int>arr = {4, 2, 2, 6, 4};
    int k = 6;
    soln s;
    int c = s.xorsub(arr,k);
    cout<<c<<" ";

    return 0;
}
