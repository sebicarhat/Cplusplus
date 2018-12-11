#include <fstream>
#define INFI 0x3f3f3f3f
using namespace std;
ifstream f("secv2.in");
int n,start,stop,poz,maxim=-INFI,i,sum=-INFI,x,k;
int main()
{
    f>>n>>k;
    for(i=1;i<=n;++i)
    {
        f>>x;
        if(sum>=0)
            sum+=x;
        else
        {
            sum=x;
            poz=i;
        }
    if(maxim<sum && i-poz>=k-1)
    {
        maxim=sum;
        start=poz;
        stop=i;
    }
    }
    ofstream g("secv2.out");
    g<<start<<" "<<stop<<" "<<maxim<<endl;
    return 0;
}
