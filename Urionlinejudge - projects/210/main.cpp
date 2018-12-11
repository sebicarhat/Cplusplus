#include <iostream>
#include<fstream>
using namespace std;
ifstream f("matrici.in");
ofstream g("matrici.out");
int main()
{
int n,m,a[10][10],v[10],j,i,k=0;
f>>n>>m;
for(i=1;i<=n;++i)
    for(j=1;j<=m;++j)
    f>>a[i][j];
for(j=1;j<=m;++j)
f>>v[j];
for(i=1;i<=n;++i)
{for(j=1;j<=m;++j)
    if(a[i][j]==v[j])k++;
    if(k==m) g<<i<<endl;
    k=0;}
    return 0;
}
