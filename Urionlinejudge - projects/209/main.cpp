#include<iostream>
#include<fstream>
using namespace std;
ifstream f("matrici.in");
ofstream g("matrici.out");

int main()
{
	int a[100][100],n,i,j;
	f>>n;
	for(i=1;i<=n;++i)
	for(j=1;j<=n;++j)
	f>>a[i][j];
	for(i=1;i<=n;++i)
	{for(j=1;j<=n;++j)
        if(a[i][j]>a[i-1][j]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1])
        cout<<"a["<<i<<","<<j<<"]="<<a[i][j]<<endl;;}
    return 0;
}
