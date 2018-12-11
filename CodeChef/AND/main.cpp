#include <iostream>

using namespace std;

int main()
{
    int i,n,v[100],sum=0,j;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>v[i];
    for(i=1;i<=n;++i)
   for(j=i+1;j<=n;++j)
    sum = sum+(v[i]&v[j]);
    cout<<sum;
    return 0;
}
