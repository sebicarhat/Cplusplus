#include <iostream>
#include<math.h>
using namespace std;

int aprim (int n)
{
    bool prim=false;
    int a[100],x=1;
    int i,j;
    for(i=2;i<=n/2;++i)
    {
        prim=true;
        for(j=2;j<=sqrt(i);++j)
            if(i%j==0) prim=false;
            {if(prim) a[x]=i;
            x++;}
    }
    for(i=1;i<=x-1;++i)
    {
        for(j=i;j<=x-1;++j)
            if((a[i]*a[j])==n) prim=true;
    }
    if(prim) return 1;
    return 0;

}
int main()
{
    int n;
    cin>>n;
    cout <<aprim(n);
    return 0;
}
