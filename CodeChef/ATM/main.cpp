#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int x;
    float s;
    cin>>x>>s;
    if(x%5==0)
    s=s-x-0.5;
    cout<<fixed<<setprecision(2)<<s;

    return 0;
}
