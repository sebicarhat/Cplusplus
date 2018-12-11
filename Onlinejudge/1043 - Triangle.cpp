#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float a,b,c,p,aria;
	cin>>a>>b>>c;
	if((a>0)&&(b>0)&&(c>0) && (a+b>c) && (b+c>a) && (c+a>b) )
	{
	p=a+b+c;
	cout<<fixed<<setprecision(1)<<"Perimetro = "<<p<<"\n";}
	else 
	{
	aria=(a+b)*c/2;
	cout<<fixed<<setprecision(2)<<"Area = "<<aria<<"\n";}
	return 0;
	
}
