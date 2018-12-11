#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cin>>n;
	for(i=1;i<=n*4;i++)
	{
		if(i%4==0) cout<<"PUM"<<endl;
		else
	cout<<i<<" ";
	}
	return 0;

}
