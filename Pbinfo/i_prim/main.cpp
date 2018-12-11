#include <iostream>
#include<math.h>
using namespace std;

int prim(int x)
        {
            bool ok1=false,ok2=false;
            int n=x-1, m=x+1,p1,p2;
            while(ok1==false)
            {
                bool prim1=true;
                for(int i=2;i<=sqrt(n);++i)
                if(n%i==0) prim1=false;
                if(prim1==true){p1=n; ok1=true;}
                n--;
            }
            while(ok2==false)
            {
                bool prim2=true;
               for(int i=2;i<=sqrt(n);++i)
               if(m%i==0) prim2=false;
                if(prim2==true) {p2=m; ok2=true;}
                ++m;
            }
            return p2-p1;
        }
int main()
{

    int n;
        cin>>n;
        cout<<prim(n);
    return 0;
}
