class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
        // Code here
       int minn = arr[n-1];
       vector<int> v;
       v.push_back(minn);
       for(int i = n-2; i>=0;i--)
       {
           if(arr[i]>=minn)
           {
               minn = arr[i];
               v.push_back(minn);
           }
           //minn = arr[i-1];
       }
        reverse(v.begin(),v.end());
        return v;
    }
};
