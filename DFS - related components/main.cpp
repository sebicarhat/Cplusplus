#include <fstream>
#include<bitset>
#include<vector>
using namespace std;
ifstream f ("dfs.in");
ofstream g("dfs.out");
#define NMAX 100005
int n,c,m;
//bitset<NMAX> viz;
vector<int> a[NMAX];
int viz[NMAX];
void df(int nod)
{
    viz[nod]=1;
    for(int i=0;i<a[nod].size();++i)
        if(viz[a[nod][i]]==0)
        {
            viz[a[nod][i]] = 1;
            df(a[nod][i]);
        }
}
int main()
{
    int x,y;
    f>>n>>m;
    for(int i=1;i<=m;++i)
        {
            f>>x>>y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
         for(int i=1;i<=n;++i)
        if(viz[i]==0)
        {
            df(i);
            c++;
        }
    g<<c;
    return 0;
}
