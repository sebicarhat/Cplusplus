#include<iostream>
using namespace std;
int main()
{
    int n,i,x,j,s=0;
    cin>>x;
    for(i=1;i<=x;++i)
       {cin>>n;
        for(j=1;j<=n/2;++j)
            if(n%j==0) s=s+j;
        if(n==s) cout<<n<<" eh perfeito\n";
        else cout<<n<<" nao eh perfeito\n";
        s=0;
       }

}
