#include <iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,k=0,j,i,H1,H2;
       for(i=1;i<=1000;++i)
    {
cin>>h1>>m1>>h2>>m2;
if(h1==0 && h2==0 && m1==0 && m2==0) break;
        H1=h1*60;
        H2=h2*60;
        j=H1+m1;
        while(j!=H2+m2)
        {
            k++;
            j++;
            if(j==1440)
                j=0;

        }
    cout<<k<<endl;
    k=0;
    }
    return 0;
}
