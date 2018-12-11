#include <fstream>
using namespace std;
int a[20][20],b[20][20],n,m,st[20],suma;
ifstream fin("flip.in");
ofstream fout("flip.out");
void citire()
{
    fin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            fin>>a[i][j];
    fin.close();
}
void calculeaza()
{
    int i,j,s,sum=0;
    for(j=1;j<=m;++j)
        if(st[j]==1)
        for(i=1;i<=n;++i)
        b[i][j]=-a[i][j];
        else
        for(i=1;i<=n;++i)
        b[i][j]=a[i][j];
    for(i=1;i<=n;++i)
    {
        s=0;
        for(j=1;j<=n;++j)
            s+=b[i][j];
        sum+=max(s,-s);
    }
    suma=max(suma,sum);
}
void back(int p)
{
    if(p==m+1) calculeaza();
    else
    {
        st[p]=0;
        back(p+1);
        st[p]=1;
        back(p+1);
    }
}
int main()
{
    citire();
    back(1);
    fout<<suma<<"\n";
    fout.close();
    return 0;
}
