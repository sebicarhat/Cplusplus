#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double pi=3.14159,r,a;
    cin>>r;
    a=r*r*pi;
    cout<<fixed<<setprecision(4)<<"A="<<a<<"\n";

    return 0;
}
