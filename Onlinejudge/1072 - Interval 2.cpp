#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int v[9999],i,n,k=0,c=0;
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>v[i];
	for(i=1;i<=n;i++)
	if(v[i]>=10 && v[i]<=20) k++;
	else c++;
	cout<<k<<" in"<<"\n"<<c<<" out"<<"\n";
	return 0;

}
