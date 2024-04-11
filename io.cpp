#include<iostream>
#include<cctype>
using namespace std;

int main() {
	 char h;
	 cin>>h;
	// int ch = (int)h;
	if(isupper(h))
	cout<<"1";
	else if(islower(h))
	cout<<"0";
	else
	cout<<"-1";
	return 0;
}
