#include<fstream>
using namespace std;

const int NMAX = 0x3f3f3f3f ;
ifstream f("matrici.in");
ofstream g("matrici.out");

int main()
{
	int n,m,i,j,a[10][20],s=0,max=INT_MIN;
	f>>n>>m;
	for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
        f>>a[i][j];

		for(i=1;i<=n;i++)
	for(j=1;j<=m;j++)
	if(a[i][j]>max) max=a[i][j];
	//s=s+max;
	//max=0;}
	g<<max;
	return 0;
}
