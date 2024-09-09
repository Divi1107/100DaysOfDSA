class Solution {
public:
    int reverse(int x) {
        int temp = x;
        long sum = 0;
        while(temp!=0)
        {
            int dig = temp%10;
            sum = sum*10+dig;
            temp = temp/10;
        }
        if(sum>INT_MAX || sum< INT_MIN) return 0;
        return int(sum);
    }
};
