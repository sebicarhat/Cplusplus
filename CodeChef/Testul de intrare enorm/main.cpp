#include <iostream>

using namespace std;

int main()
{
    unsigned int n,i,k,v[10000000],c=0;
    cin>>n>>k;
    for(i=1;i<=n;++i)
        cin>>v[i];
    for(i=1;i<=n;++i)
        if(v[i]%k==0)
        c++;
    cout<<c;
    return 0;
}
