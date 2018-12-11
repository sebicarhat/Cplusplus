#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x,b;
	float a1=4.00,a2=4.50,a3=5.00,a4=2.00,a5=1.50;
	double p;
	cin>>x>>b;
	if(x==1) p=b*a1;
	else
	if(x==2) p=b*a2;
	else
	if(x==3) p=b*a3;
	else 
	if(x==4) p=b*a4;
	else
	if(x==5) p=b*a5;
	cout<<fixed<<setprecision(2)<<"Total: R$ "<<p<<"\n";
	return 0;
}
