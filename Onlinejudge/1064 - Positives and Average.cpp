#include<iostream>
using namespace std;
int main()
{
	int k=0;
	float a,b,c,d,e,f,s=0,r;
cin>>a>>b>>c>>d>>e>>f;
if(a>0)
		{k++;
		s=s+a;}
if(b>0)
		{k++;
		s=s+b;}
if(c>0)
		{k++;
		s=s+c;}
if(d>0)
		{k++;
		s=s+d;}
if(e>0)
		{k++;
		s=s+e;}
if(f>0)
		{k++;
		s=s+f;}
		r=s/k;
		cout<<k<<" valores positivos"<<"\n"<<r<<"\n";
		return 0;
}
