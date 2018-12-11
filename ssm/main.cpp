#include <fstream>

using namespace std;
ifstream f("ssm.in");
int n,start,stop,poz,maxim=-6000000,i,sum=-6000000,x;
int main()
{
    f>>n;
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
    if(maxim<sum)
    {
        maxim=sum;
        start=poz;
        stop=i;
    }
    }
    ofstream g("ssm.out");
    g<<maxim<<" "<<start<<" "<<stop<<endl;
    return 0;
}
