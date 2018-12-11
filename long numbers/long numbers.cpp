#include <iostream>
#include<string.h>
using namespace std;
    int a[1000],b[1000],c[2000],i,j;
int main()
{
    char sa[100],sb[100],s;
    cout<<"Introduceti numerele:\n";
    cin>>sa>>sb;
    cout<<"Alegeti 'S' pentru suma sau 'P' pentru produs:\n";
    cin>>s;
    int l=strlen(sa);
    int lb=strlen(sb);
    int ls=l+(lb-1);
    for(i=0;i<l;++i)
        a[i]=sa[l-1-i]-48;
    for(j=0;j<lb;++j)
        b[j]=sb[lb-1-j]-48;
        if(s=='p' || s=='P')
        {
    for(j=0;j<lb;++j)//iau fiecare cifra a lui b
       for(i=0;i<l;++i)
           c[i+j]+=(a[i]*b[j]);//o inmultesc cu fiecare cifra a lui a si o adun la rezultat
for(i=0;i<ls-1;++i)
if(c[i]>9) {
        c[i+1]+=c[i]/10;
        c[i]=c[i]%10;
        }//fac adunarea rezultatelor incat sa ramana o cifra pe fiecare pozitie
        for(i=ls-1;i>=0;--i)
    cout<<c[i];
        }
        else if(s=='s' || s=='S')
        {
            int maxim = max(l,lb);
            for(i=0;i<maxim;++i)
                c[i]=a[i]+b[i];//adun cifrele de acelasi rang
            for(i=0;i<maxim-1;++i)
                if(c[i]>9) {
                                c[i+1]+=c[i]/10;
                                c[i]=c[i]%10;
                            }//fac adunarea rezultatelor incat sa ramana o cifra pe fiecare pozitie
            for(i=maxim-1;i>=0;--i)
                cout<<c[i];
        }


    return 0;
}
