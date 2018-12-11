#include <iostream>

using namespace std;

int main()
{
    int n,i,j,v[22][22],k=0;
    cin>>n;
    for(j=0;j<=n+1;++j)
        v[0][j]=0;
        for(j=0;j<=n+1;++j)
        v[n+1][j]=0;
    for(i=0;i<=n+1;++i)
        v[i][0]=0;
         for(i=0;i<=n+1;++i)
        v[i][n+1]=0;

    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
        cin>>v[i][j];
        for(i=1;i<=n;++i)
            {for(j=1;j<=n;++j)
            if(v[i][j]>v[i-1][j] && v[i][j]>v[i+1][j] && v[i][j]>v[i][j-1] && v[i][j]>v[i][j+1])
            k++;
            }
        cout<<k;
    return 0;
}
