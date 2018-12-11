//Regine1
///sa se afiseze toate modurile de aranjare a n regine pe o tabla de n*n patrate
#include <iostream>
#include <cmath>
#include<cstdlib>
using namespace std;
int st[100],n;
bool gasit;
int ok(int p)
{
    for(int i=1;i<p;++i)
        if(st[i] == st[p] || abs(p-i)==abs(st[p]-st[i])||(gasit))
 return 0;
return 1;
}

void tipar()
{
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
            if(st[j]==i)
            cout<<'*'<<" ";
            else
            cout<<'-'<<" ";
            cout<<endl;
    }
}

void back(int p)
{
       for(int i=1;i<=n;i++)
        {
        st[p]=i;
            if(ok(p) )
            if(p==n)
                {
                tipar();
                gasit=true;
                }
            else
                back(p+1);
        }
}

int main()
{
    cin>>n;
    back(1);
    return 0;
}
