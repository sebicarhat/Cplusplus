#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    string name;
    double salary,bonus;
    cin>>name>>salary>>bonus;
    salary=salary+(bonus*0.15);
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<salary<<"\n";
    return 0;
}
