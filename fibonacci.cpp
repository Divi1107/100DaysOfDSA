#include<bits/stdc++.h>
using namespace std;

 int f(int n)
       {
           if(n<=1)
           {
                   return n;
           }
           else
           {
                return  f(n-1)+f(n-2);
           }
       } //idk lol
int main()
{
       int n,res;
       cin>>n;
       res = f(n);
       cout<<res;
       
       return 0;
}

