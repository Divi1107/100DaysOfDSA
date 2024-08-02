class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	   map <int , int> mp; int data;
	   for(int i = 0;i<n;i++)
	   {
	       mp[arr[i]]++;
	   }
	   for(auto it = mp.begin();it!=mp.end();it++)
	   {
	       if(it->first == x)
	       {
	           data = it->second;
	           break;
	       }
	       else
	       {
	           data = 0;
	       }
	   }
	   return data;
	}
};
