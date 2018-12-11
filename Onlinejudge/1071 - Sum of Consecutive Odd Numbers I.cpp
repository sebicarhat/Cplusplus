#include<iostream>
using namespace std;
int main()
{
	int x,y,s=0,i;
	cin>>x>>y;
	if(x<y)
	{
	for(i=x+1;i<y;i++)
	if(i%2==1) s=s+i;
	cout<<s<<"\n";}
	else
	if(x>y)
	{
	for(i=y+1;i<x;i++)
	if(i%2==1 ||i%2==-1) s=s+i;
	cout<<s<<"\n";}
	
	return 0;
}
