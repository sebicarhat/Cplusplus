#include <iostream>
#include<queue>
using namespace std;
int a[100][100],viz[100],n;
queue <int> q;
void bf()
{
    int nod;
    q.push(1);
    while(!q.empty())
    {
        nod=q.front();
        cout<<nod<<" ";
        //viz[nod]=1;
        q.pop();
        for(int i=1;i<=n;++i)
        if(a[i][nod]==1 && viz[i]==0)
        {
        viz[i]=1;
        q.push(i);
        }
    }
}

int main()
{
    int x,y;
    cin>>n;
    while(cin>>x>>y)
        a[x][y]=a[y][x]=1;
    bf();
    return 0;
}
