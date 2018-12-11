#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int r;
    double a;
    cin>>r;
    a=3.14159*pow(r,2);
    cout<<"A="<<fixed<<setprecision(4)<<a<<endl;
    return 0;
    }
