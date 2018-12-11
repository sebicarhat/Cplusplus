#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    int x;
    float y;
    double med;
        cin>>x>>y;
    med=x/y;
    cout<<fixed<<setprecision(3)<<med<<" km/l"<<endl;
    return 0;
    }
