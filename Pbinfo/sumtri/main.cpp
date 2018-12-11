#include <iostream>

using namespace std;
int i,j,a[100][100],s[100][100],n;
int main()
{
    int i,j,a[100][100],s[100][100],n;
    for(i=1;i<=n;++i)
        for(j=1;j<=i;++j)
        cin>>a[i][j];
        for(j=1;j<=n;++j)
        s[n][j]=a[n][j];
        for(i=n;i<=1;--i)
            for(j=1;j<=i;++j)
        s[i][j]=max(s[i+1][j+1],s[i+1][j]);
        cout<<s[1][1]<<"\n";
    return 0;
}
