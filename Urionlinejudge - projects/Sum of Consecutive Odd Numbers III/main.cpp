#include <iostream>

using namespace std;

int main()
{
    int x,y,n,s=0,j;
    cin>>n;
    for(int i=1;i<=n;++i)
    {cin>>x>>y;
    if(x%2==1)
        {for(j=1;j<=y;++j)
    {s=s+x;
    x=x+2;}
    cout<<s<<"\n";
    s=0;}
    else if(x%2==0)
        {x=x+1;
        for(j=1;j<=y;++j)
        {s=s+x;
        x=x+2;}
    cout<<s<<"\n";
    s=0;}
    }
    return 0;
}
