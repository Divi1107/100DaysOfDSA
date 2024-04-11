#include<cmath>
double areaSwitchCase(int ch, vector<double> a) {
	double pi = M_PI;
	double area;
	cin>>ch;
	switch(ch)
	{
		case 1: area = pi*a[0]*a[0]; 
		return area;
		break;
		case 2: return a[0]*a[1];
		break;
		default:"invalid";
		  
	}
}
