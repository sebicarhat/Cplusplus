#include <iostream>

using namespace std;
    int n,inst[100],down[100],i,aux[100];
int main()
{
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>inst[i]>>down[i];
        aux[n] = down[n];
    for(i=n-1;i>=1;--i)
        aux[i]=down[i]+max(0,aux[i+1]-inst[i]);
    cout<<aux[1];
    return 0;
}
