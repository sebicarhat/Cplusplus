#include<iostream>
using namespace std;
int main()
{
	int i,j=3;
	for(i=1;i<=9;i+=2)

{
	j=j+4;	
	cout<<"I="<<i<<" "<<"J="<<j<<"\n";
j=j-1;
	cout<<"I="<<i<<" "<<"J="<<j<<"\n";
j=j-1;
	cout<<"I="<<i<<" "<<"J="<<j<<"\n";
}

	return 0;
}
