class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int index = -1;
        int n = arr.size();
        for(int i = n-2;i>=0;i--)
        {
            //while scanning if there is a dip
            if(arr[i]<arr[i+1])
            {
                //notify ind that is the breaking point
                index = i;
                break;
            }
        }
        //so if we already have a sorterd array in increasing order we have to reverse it as to find next permu
        if(index==-1)
        {
            reverse(arr.begin(),arr.end());
            return ;
        }
        // if there exists a number which is lil greeater than index value then we have to swAP it
        for(int i = n-1;i>index;i--)
        {
            if(arr[i]>arr[index])
            {
                // int temp = arr[i];
                // arr[i] = arr[index];
                // arr[index] = temp;
                swap(arr[i],arr[index]);
                break;
            } 
            //then we have to reverse the remaining from ind index to end ,else sort it.
        }
        reverse(arr.begin()+index+1,arr.end());
        return ;
        //print the vextor
        // for(auto i:arr)
        // {
        //     cout<<i<<" ";
        // }
    }
};
