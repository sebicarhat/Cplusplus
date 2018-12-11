#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
for(i=1;i<=1000000000;++i)
    {
        cin>>n;
        if(n==0) break;
        else
        {
        cout<<1;
        for(j=2;j<=n;++j)
            cout<<" "<<j;
        cout<<endl;
        }
    }



return 0;
}
