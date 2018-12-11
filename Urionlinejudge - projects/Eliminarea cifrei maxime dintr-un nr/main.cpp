#include<iostream>
#include<math.h>
using namespace std;
int max_cifra(int x)
{
	int max=0;
	while(x>0)
	{
	if(x%10>max)
	max=x%10;
	x=x/10;}
	return max;
}
int main()
{
	int x,nr=0,p=1,r;
	cin>>x;
	r=max_cifra(x);
	while(x>0)
	{
		if(x%10!=r)
		{nr=nr+(x%10)*p;
		p=p*10;}
		x=x/10;


	}
			cout<<nr;
		return 0;
}
