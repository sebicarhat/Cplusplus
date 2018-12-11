#include <iostream>

using namespace std;

int main()
{
   int a,b,c,d,e,aux;
   cin>>a>>b>>c>>d>>e;
   for(int i=1;i<=4;i++)
   {
       if(a>b)
       {
        aux=a;
        a=b;
        b=aux;
       }
        if(b>c)
        {
        aux=b;
        b=c;
        c=aux;
        }
        if(c>d)
        {
        aux=c;
        c=d;
        d=aux;
        }
        if(d>e)
        {
        aux=d;
        d=e;
        e=aux;
        }
   }
   cout<<c+d+e;

    return 0;
}
