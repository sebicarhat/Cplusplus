#include<iostream>
#include<fstream>
#include<limits.h>
using namespace std;
int main()
{
	ifstream f("matrici.in");
	ofstream g("matrici.out");
	int a[100][100],v[100],i,j,n,m,k=0,s=0,max=INT_MIN;
	f>>n>>m;
	for(i=1;i<=n;++i)
	for(j=1;j<=m;++j)
	f>>a[i][j];

    for(i=1;i<=n;++i)
    {
    for(j=1;j<=m;++j)
    if(a[i][j]==0) k++;
    v[i]=k;}
    for(i=1;i<=n;++i)
        if(v[i]>max) max=v[i];
          for(i=1;i<=n;++i)
            if(v[i]==max) g<<i;
	return 0;
}
