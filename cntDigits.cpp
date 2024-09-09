class Solution{
public:
    int evenlyDivides(int N){
        int temp = N; int cnt = 0;
        while(temp>0)
        {
            int dig = temp%10;
            if(dig!=0 && N%dig==0)
            {
                cnt++;
            }
            temp = temp/10;
        }
        return cnt;
    }
};
