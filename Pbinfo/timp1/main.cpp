#include <iostream>

using namespace std;

int main()
{
    int h,m,h2,m2;
    cin>>h>>m>>h2>>m2;
    m=m+(h*60);
    m=m+m2;
    m=m+(h2*60);
    h=m/60;
    m=m%60;
    while(h>23){
     h=h-24;
    }
    cout<<h<<" "<<m;
    return 0;
}
