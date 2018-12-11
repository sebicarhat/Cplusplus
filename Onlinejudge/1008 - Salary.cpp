#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int nr,ore;
    float salar;
    cin>>nr>>ore>>salar;
    cout<<"NUMBER = "<<nr<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salar*ore<<endl;
    return 0;
}
