#include <iostream>

using namespace std;

int main()
{
    int x,y,n,i,j;
    cin>>n;
    for(i=1;i<=n;++i)
        {cin>>x>>y;
        if(x<y)
        {for(j=y;j>=x;--j)
            if(x*j==y) {cout<<"1\n";break; }
        else cout<<"2\n";
        }
        else if(x>y)
        {
           for(j=y;j<=x;++j)
            if(x*j==y) {cout<<"1\n";break;}
        else cout<<"2\n";
        }
        }
    return 0;
}
