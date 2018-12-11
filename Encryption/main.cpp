#include <iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
char s;
void proces()
{

    cout<<"Alegeti 'c' pentru criptare sau 'd' pentru decriptare\n";
    cin>>s;
    if(s!='c' && s!='C' && s!='d' && s!='D')
    {
        cout<<"Nu ati ales un caracter valid!\n";
        proces();
    }
}
int main()
{
    proces();
    int x,l,i,j;
    char c[1000],aux;
        cout<<"Introduceti sirul de caractere:\n";
    cin.getline(c,1);
    cin.getline(c,1000);
        l=strlen(c);
        if(s=='c'|| s=='C')
        {
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
        for(j=0;j<l;++j)
        {
            x=c[j];
            --x;
            c[j]=x;
        }
        }
        else if(s=='d'||s=='D')
        {
        for(j=0;j<l;++j)
        {
            x=c[j];
            ++x;
            c[j]=x;
        }

        for(j=0;j<l/2;++j)
        {
            aux=c[j];
            c[j]=c[l-j-1];
            c[l-j-1]=aux;

        }
        for(j=0;j<l;++j)
            if((c[j]>='a' && c[j]<='z') || (c[j]>='A' && c[j]<='Z'))
        {
            x=c[j];
            x-=3;
            c[j]=x;
        }
        }
        cout<<c<<"\n";
    system("pause");
    return 0;
}
