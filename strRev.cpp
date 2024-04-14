#include<iostream>
#include<stdlib>
#include<string>
long reverseBits(long n) {
      long result = 0;
    for (int i = 0; i < 32; ++i) {
        result <<= 1;
        result |= n & 1;
        n >>= 1;
    }
    return result;
}
int main()
{
  clrscr();
long n=0;
cout<<"Enter a number"<<endl;
cin>>n;
long output = reverseBits(n);
cout<<bitset<32>(output);
return 0;
}
