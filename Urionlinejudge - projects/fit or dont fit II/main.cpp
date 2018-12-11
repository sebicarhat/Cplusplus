#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    bool ok=true;
    char s[1000],v[1000];
    int n,l,lv,ls;
    cin>>n;
    for (int i=1;i<=n;++i)
    {
        cin>>s>>v;
        ls=strlen(s)-1;
        lv=strlen(v)-1;
        if(ls<=lv) l=ls+1;
        else l=lv+1;
        for(int j=1;j<=l;++j)
            {if(s[ls]!=v[lv]) ok=false;
            lv--;ls--;}
        if(ok) cout<<"encaixa\n";
        else cout<<"nao encaixa\n";

    }
    return 0;
}
