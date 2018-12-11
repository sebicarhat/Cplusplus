#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	float v[6];
	int i,k=0;
	for(i=1;i<=6;i++)
	cin>>fixed>>setprecision(1)>>v[i];
	for(i=1;i<=6;i++)
	if(v[i]>0) k++;
    cout<<k<<" valores positivos"<<endl;
	return 0;
}
