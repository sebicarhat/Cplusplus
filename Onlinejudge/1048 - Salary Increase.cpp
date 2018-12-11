#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c;
	int d=0;
    cin>>a;
    
    if(a>0 && a<=400)
    {
	b=(a/100)*15;
    d=15;
	}
    if(a>400 && a<=800)
    {
	b=(a/100)*12;
    d=12;
	}
    if(a>800 && a<=1200)
    {
	b=(a/100)*10;
    d=10;
	}
    if(a>1200 && a<=2000)
    {
	b=(a/100)*7;
    d=7;
	}
    if(a>2000)
    {
	b=(a/100)*4;
    d=4;
	}
    c=a+b;
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<c<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
    cout<<"Em percentual: "<<d <<" %"<<endl;
    return 0;
}
