#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    char cuv[6];
    for(i=1;i<=n;i++)
        {
            cin>>cuv;
            int l=strlen(cuv);
            if(l==5) cout<<3<<"\n";
            if(l==3)
            {
                if(cuv[1]=='n'&&cuv[2]=='e')
                cout<<1<<"\n";
                else
                if(cuv[0]=='o'&&cuv[2]=='e')
                cout<<1<<"\n";
                else
                if(cuv[0]=='o'&&cuv[1]=='n')
                cout<<1<<"\n";
                else
                if(cuv[1]=='w'&&cuv[2]=='o')
                cout<<2<<"\n";
                else
                if(cuv[0]=='t'&&cuv[2]=='o')
                cout<<2<<"\n";
                else
                if(cuv[0]=='t'&&cuv[1]=='w')
                cout<<2<<"\n";
            }


        }
    return 0;
}
