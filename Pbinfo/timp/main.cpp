#include <iostream>

using namespace std;

int main()
{
    int h,m,x;
    cin>>h>>m>>x;
    m=m+(h*60);
    m=m+x;
    h=m/60;
    m=m%60;
    while(h>23){
     h=h-24;
    }
    cout<<h<<" "<<m;
    return 0;
}
