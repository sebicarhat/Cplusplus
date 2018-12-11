#include<iostream>
using namespace std;
int main()
{
	int x,v[1000],i,a[1000],s,j;
	for(i=1;i<=1000;i++)
	{
	cin>>v[i]>>a[i];
		if(v[i]>0 && a[i]>0) 
		{
			s=0;
			if(v[i]<a[i])
			{
			for(j=v[i];j<=a[i];++j)
			{
			s=s+j;
			cout<<j<<" ";
			}
			cout<<"Sum="<<s<<"\n";
			}
			
	else 
			if(v[i]>a[i])
			{
			for(j=a[i];j<=v[i];++j)
			{
			s=s+j;
			cout<<j<<" ";
			}
			cout<<"Sum="<<s<<"\n";
			}
		}
	else
		if(v[i]==0 || a[i]==0 || v[i]==-1 || a[i]==-1) break;
	}
	return 0;
	
}
