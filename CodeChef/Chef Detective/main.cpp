#include <iostream>
using namespace std;
bool a[100];
int main()
{
    int x,n,i,k;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        a[x]=true;
    }
    for(i=1;i<=n;++i)
        if(a[i]==false)
        cout<<i<<" ";

    return 0;
}
