#include <fstream>

using namespace std;
ifstream f("gengraf.in");
ofstream g("gengraf.out");
int st[100],n,i,p,a[100][100],j,k,m[100][100],c,contor=0,suma;
void afisare(int p)
{
    for(i=1;i<=p;++i)
    {
        for(j=1;j<=n;++j)
        for(k=j+1;k<=n;++k)
        if(a[j][k]==st[i])
        m[j][k]=m[k][j]=1;
    }
    for(j=1;j<=n;++j,g<<"\n")
    for(k=1;k<=n;++k)
        g<<m[j][k]<<" ";
        g<<endl;
    for(j=1;j<=n;++j)
    for(k=1;k<=n;++k)
        m[j][k]=0;
}
void back(int p)
{
    int pval;
    for(pval=st[p-1]+1;pval<=suma;++pval)
    {
        st[p]=pval;
        afisare(p);
        back(p+1);
    }

}
void back1(int p)
{
    int pval;
    for(pval=st[p-1]+1;pval<=suma;++pval)
    {
        st[p]=pval;
        contor++;
        back1(p+1);
    }

}
int main()
{
    f>>n;
    suma=((n*n)-n)/2;
    back1(1);
    g<<contor+1<<"\n";
    for(j=1;j<=n;++j,g<<"\n")
    for(k=1;k<=n;++k)
    g<<m[j][k]<<" ";
    g<<"\n";
    int c=1;
    for(j=1;j<=n;++j)
    for(k=j+1;k<=n;++k)
    {
        a[j][k]=c;
        c++;
    }

    back(1);
    back1(1);
    return 0;
}
