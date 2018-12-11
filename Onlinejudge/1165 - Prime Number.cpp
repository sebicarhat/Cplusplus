#include <iostream>
#include<math.h>
using namespace std;
int main()
 {
     int n,j,x,i,prim;
     cin>>x;
     for(i=1;i<=x;++i)
      {prim=1;
     cin>>n;
for(j=2;j<=sqrt(n);++j)
    if(n%j==0) prim=0;
if(prim)
    cout<<n<<" eh primo\n";
else cout<<n<<" nao eh primo\n";
}
    return 0;
}
