#include <iostream>
#include<fstream>
#include<math.h>
using namespace std;
int prim (int x)
{
    int d;
    bool prim=true;
    for(d=2; d<=sqrt(x); ++d)
        if(x%d==0) prim =false;
    if(prim) return true;
    return false;
}
        ifstream f("difprim.in");
    ofstream g("difprim.out");
int main()
{

    int v[10] ,o=0,a,b,dif[10],i,max=0;
    f>>a>>b;
    for (i=a; i<=b;++i)
        if(prim(i)== 1) {v[o]=i;
                        o++;}
        o--;
        for (i=0;i<o;++i)
            dif[i] = v[i+1] - v[i];
        for (i=0;i<o;++i)
            if(dif[i]>max) max=dif[i];
        for(i=0;i<=o;++i)
            if(dif[i]==max) g<<v[i]<<" "<<v[i+1]<<"\n";
    return 0;
}
