#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,delta;
    double r1,r2;
    cin>>a>>b>>c;
    if(a>0)
    {
        delta=pow(b,2)-4*a*c;
    r1=(-b+sqrt(delta))/(2*a);
    r2=(-b-sqrt(delta))/(2*a);
    cout<<fixed<<setprecision(5)<<"R1 = "<<r1<<endl;
    cout<<fixed<<setprecision(5)<<"R2 = "<<r2<<endl;
     
    }
    else
    cout<<"Impossivel calcular"<<endl;
    return 0;
 
}
