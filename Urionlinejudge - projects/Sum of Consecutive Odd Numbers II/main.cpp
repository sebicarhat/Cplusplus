#include <iostream>

using namespace std;

int main()
{
    int n,x,y,aux,s=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>x>>y;
        if(x>y){aux=x;x=y;y=aux;}
        for(int j=x+1;j<y;++j) if(j%2==1) s+=j;
        cout<<s<<"\n"; s=0;
    }
    return 0;
}
