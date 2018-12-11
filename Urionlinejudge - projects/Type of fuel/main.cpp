#include <iostream>

using namespace std;
int a,g,d;
int main()
{   int x;
    cin>>x;
   while(x!=4)
   {
       if(x==1) a++;
       else if(x==2) g++;
       else if(x==3) d++;
        cin>>x;
   }
   cout<<"MUITO OBRIGADO\n";
   cout<<"Alcool: "<<a<<"\n";
   cout<<"Gasolina: "<<g<<"\n";
   cout<<"Diesel: "<<d<<"\n";
    return 0;
}
