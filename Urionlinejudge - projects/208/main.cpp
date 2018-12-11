#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream f("matrici.in");
	ofstream g("matrici.out");
	int a[100][100],n,i,j,k;
	f>>n;
	i=n/2+1;
	j=n;
	k=1;
	a[i][j]=k;
	while(k<=n*n)
	{
		k++;
		if(j<n&&i<n)
		{i++;
		j++;
		a[i][j]=k;
		}
		else
		if(j==n&&i<n)
		{
			i++;j=1;
			a[i][j]=k;
		}
		else
		if(i==n&&j<n)
		{i=1;j++;a[i][j]=k;
		}
		if(k%n==0)
		{
			j--;k++;a[i][j]=k;
		}
	}
	    for(i=1;i<=n;++i)
		{for(j=1;j<=n;++j)
		g<<a[i][j]<<" ";
		g<<endl;
		}
	return 0;
}
