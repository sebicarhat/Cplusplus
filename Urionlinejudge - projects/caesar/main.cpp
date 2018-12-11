#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[100],v[27];
    int n,k,x,g;
    v[0]='A';
    v[1]='B';
    v[2]='C';
    v[3]='D';
    v[4]='E';
    v[5]='F';
    v[6]='G';
    v[7]='H';
    v[8]='I';
    v[9]='J';
    v[10]='K';
    v[11]='L';
    v[12]='M';
    v[13]='N';
    v[14]='O';
    v[15]='P';
    v[16]='Q';
    v[17]='R';
    v[18]='S';
    v[19]='T';
    v[20]='U';
    v[21]='V';
    v[22]='W';
    v[23]='X';
    v[24]='Y';
    v[25]='Z';

    cin>>n;
    for (int i=1;i<=n;++i)
    {
        cin>>s;
        cin>>x;
        for(int j=0;j<strlen(s);++j)
            {
                for(k=0;k<=26;++k)
                if(s[j]==v[k]) g=k-x;
                if(g<0) g+=26;
                    s[j]=v[g];
            }
        cout<<s<<"\n";
    }
    return 0;
}
