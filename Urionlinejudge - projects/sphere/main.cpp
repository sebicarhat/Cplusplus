#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double pi=3.14159,v;
    int r;
    cin>>r;
    v=(4.0/3)*pi*r*r*r;
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<v<<"\n";
    return 0;
}
