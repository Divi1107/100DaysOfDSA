
class Solution {
  public:
    long long solve(vector<int>& bt) {
       sort(bt.begin(),bt.end());
       long long timee = 0;
       long long waittime = 0;
       for(int i = 0;i<bt.size();i++)
       {
           waittime = waittime+timee;
           timee = timee+bt[i];
       }
       return waittime/bt.size();
    }
};
