#include <iostream>

using namespace std;

int main()
{
    int a,b,k1=0,k2=0,i,n;
        cin>>n;
    while(n!=0)
    {

    for(i=1;i<=n;++i)
    {
        cin>>a>>b;
        if(a>b) k1++;
        else if(a<b) k2++;
    }
    cout<<k1<<" "<<k2<<endl;
    k1=0; k2=0;
        cin>>n;
    }
    return 0;
}
