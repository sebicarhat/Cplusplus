#include <iostream>
#include<bitset>
using namespace std;
void df(int nod)
{
    viz[nod]=1;
    cout<<nod;
    for(int i=1;i<=n;++i)
        if(viz[i]==0 && a[nod][i]==1)
        df(i);
}
int main()
{
    int x,y;
    cin>>n;
    for(int i=1;i<=m;++i)
    {
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    df(1);
    return 0;
}

