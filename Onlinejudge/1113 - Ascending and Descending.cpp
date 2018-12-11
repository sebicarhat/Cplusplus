#include<iostream>
using namespace std;
int main()
{
	int x,v[1000],a[1000],i;
	for(i=1;i<=1000;i++)
	{
	cin>>v[i]>>a[i];
	if(v[i]>a[i]) cout<<"Decrescente"<<"\n";
	if(v[i]<a[i]) cout<<"Crescente"<<"\n";
	if(v[i]==a[i]) break;}
	return 0;
	
}
