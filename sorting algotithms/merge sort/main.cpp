#include <iostream>

using namespace std;

int main()
{
    int a[100],b[100],c[100],i,j,l;
    int n,m;
    cin>>n>>m;
    for(i=0;i<n;++i)
    cin>>a[i];
        for(j=0;j<m;++j)
        cin>>b[j];
    int k=-1;
    i=0;j=0;
    while(i<n&&j<m)
        if(a[i]<b[j])
        c[++k]=a[i++];
    else
        c[++k]=b[j++];
    if(i<n)
        for(l=i;l<n;l++)
        c[++k]=a[l];
    else
        for(l=j;l<m;l++)
        c[++k]=b[l];
    for(l=0;l<=k;l++)
        cout<<c[l]<<" ";
    return 0;
}
