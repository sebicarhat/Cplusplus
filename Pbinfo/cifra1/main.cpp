#include <iostream>

using namespace std;

int main()
{
    int n,min=0X3f3f3f,inv=0,p=1;
    bool gasit=false;
    cin>>n;
    while(n>0)
    {
        inv=inv*10+n%10;
        if(n%10<=min)
        min=n%10;
        n/=10;
    }
    n=0;
    while(inv>0)
    {
        if(inv%10!=min || gasit==true)
            {
            {n=n+(inv%10)*p;
                           p=p*10;}
            }
            else gasit=true;
              inv/=10;
    }
    while(n>0)
    {
        inv=inv*10+n%10;
        n/=10;
    }
    cout<<inv;
    return 0;
}
