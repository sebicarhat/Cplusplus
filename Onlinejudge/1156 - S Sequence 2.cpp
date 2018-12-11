#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    float s=0,i,j=1;

    for(i=1;i<=39;i=i+2)
    {
    s=s+i/j;
    j=j*2;}

    cout<<fixed<<setprecision(2)<<s<<endl;

    return 0;
    }
