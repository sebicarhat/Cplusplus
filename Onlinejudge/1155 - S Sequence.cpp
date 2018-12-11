#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float s=0,i;
    for(i=1;i<=100;++i)
    s=s+1/i;
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
