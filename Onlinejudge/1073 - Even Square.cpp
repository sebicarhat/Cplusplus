#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,n,x;
	cin>>n;
	for(i=1;i<=n;i++)
	if(i%2==0) 
	{
		x=pow(i,2);
		cout<<i<<"^2 = "<<x<<"\n";
	}
	return 0;
}
