#include <iostream>
#include <math.h>
using namespace std;
int n,i,d;
bool ok=true;
int prim(int n)
{
    for(d=2;d<=sqrt(n);++d)
        if(n%d==0) ok=false;
    if(ok==false) return 1;
    else return 0;
}
int main()
{
    cin>>n;
    cout<<prim(n);
    return 0;
}
