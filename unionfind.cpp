 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        set<int> arr;
        vector<int> v ;
        int data;
        for(int i =0;i<n;i++)
        {
            arr.insert(arr1[i]);
        }
        for(int i =0;i<m;i++)
        {
            arr.insert(arr2[i]);
        }
        for(auto it = arr.begin();it!=arr.end();++it)
        {
            data = *it;
            v.insert(v.begin()+it,1,data);
        }
        return v;
    } 
