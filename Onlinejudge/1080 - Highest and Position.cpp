#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int v[100],i,max=INT_MIN;
	for(i=1;i<=100;i++)
	cin>>v[i];
	for(i=1;i<=100;i++)
	if(v[i]>max) max=v[i];
	for(i=1;i<=100;i++)
	if(v[i]==max) cout<<v[i]<<"\n"<<i<<"\n";
	return 0;
}
