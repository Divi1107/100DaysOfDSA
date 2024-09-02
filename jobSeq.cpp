bool comparator(Job a, Job b)
    {
        return a.profit>b.profit;
        
    }
class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int>ans;
        int maxdead = -1;
        int totprofit = 0; int count = 0;
        sort(arr,arr+n,comparator);
        for(int i = 0; i < n; i++) {
            maxdead = max(maxdead, arr[i].dead);
        }
         vector<int> hash(maxdead + 1, -1);
        for(int i = 0;i<n;i++)
        {
            for(int j = arr[i].dead; j>0;j--)
            {
                if(hash[j] == -1) //we can do job
                {
                    totprofit = totprofit+arr[i].profit;
                    count++;
                    hash[i] = arr[i].id;
                    break;
                }
            }
        }
        ans.push_back(count);
        ans.push_back(totprofit);
        return ans;
    } 
};
