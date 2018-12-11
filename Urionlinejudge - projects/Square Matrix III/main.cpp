#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j,x,y,a[100][100],aux,k,c,h;
    cin>>n;
    while(n!=0)
    {   x=1;
        k=0;
            for(i=1;i<=n;++i) //crearea matricei
            {   y=x;
                for(j=1;j<=n;++j)
                {a[i][j]=y; y*=2;}
                x*=2;
            }
        aux=a[n][n];
        while(aux>0){k++;aux/=10;} //nr de cifre al celui mai mare nr din matrice
        for(i=1;i<=n;++i)
        {
            for(j=1;j<=n;++j)
                {
                    c=0;
                    aux=a[i][j];
                    while(aux>0){c++;aux/=10;} //nr de cifre al valorii lui a[i][j]
                    for(h=0;h<k-c;++h)cout<<" ";
                    cout<<a[i][j];
                    if(j!=n)cout<<" ";
                }
            cout<<"\n";
        }
        cout<<"\n";

        cin>>n;
    }
    return 0;
}
