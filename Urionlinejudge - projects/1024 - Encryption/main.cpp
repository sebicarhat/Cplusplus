#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int x,n,l,i,j;
    char c[1000],aux;
    cin>>n;
    cin.getline(c,1000);
    for(i=1;i<=n;i++)
    {
        cin.getline(c,1000);
        l=strlen(c);
        for(j=0;j<l;++j)
            if((c[j]>='a' && c[j]<='z') || (c[j]>='A' && c[j]<='Z'))
        {
            x=c[j];
            x+=3;
            c[j]=x;
        }
        for(j=0;j<l/2;++j)
        {
            aux=c[j];
            c[j]=c[l-j-1];
            c[l-j-1]=aux;

        }
        for(j=l/2;j<l;++j)
        {
            x=c[j];
            --x;
            c[j]=x;
        }
        cout<<c<<"\n";
    }
    return 0;
}
