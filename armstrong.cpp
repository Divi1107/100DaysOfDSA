#include <iostream>
#include<cmath>
using namespace std;
bool arm(int num)
{
    int n = to_string(num).size();
    int temp = num; int sum = 0;
    while(temp>0)
    {
        int digit = temp%10;
        sum = sum+ pow(digit,n);
         int gg = temp/10;
         temp = gg;
    }
    if(sum==num)return true;
    else return false;
}
int main()
{
    bool res = arm(153);
    cout<<res;

    return 0;
}
