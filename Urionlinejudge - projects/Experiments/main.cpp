#include <iostream>
#include<iomanip>
using namespace std;
int c,r,s;
int main()
{
   int nr,i,x,k=0;
   char animal;
   cin>>x;
   for(i=1;i<=x;++i)
   {
       cin>>nr>>animal;
       k=k+nr;
       if(animal=='C') c=c+nr;
       else if(animal=='R') r=r+nr;
       else if(animal=='S') s=s+nr;
   }
   cout<<"Total: "<<k<<" cobaias\n";
   cout<<"Total de coelhos: "<<c<<endl;
   cout<<"Total de ratos: "<<r<<endl;
   cout<<"Total de sapos: "<<s<<endl;
cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<(float)(c*100)/k<<" %\n";
cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<(float)(r*100)/k<<" %\n";
cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<(float)(s*100)/k<<" %\n";
    return 0;
}
