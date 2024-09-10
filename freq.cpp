#include <iostream>
#include<vector>
#include<map> 
using namespace std;

vector<int> freq(vector<int>& arr)
{
    vector<int> ans;
    map<int,int> mpp;
    for(int i = 0;i<arr.size();i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it: mpp)
    {
        if(it.second>1)
        {
            ans.push_back(it.second);
        }
    }
    return ans;
}
int main()
{
   vector<int> arr = {2,3,4,4,4,4,5,3};
   arr = freq(arr);
   for(auto it:arr)
   {
       cout<<it<<" ";
   }

    return 0;
}
