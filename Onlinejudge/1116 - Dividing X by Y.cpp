#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i;
    float n,d,m;
    cin>>d;
    for(i=1;i<=d;++i)
    {
        cin>>n>>m;
        if(m==0)
        cout<<"divisao impossivel"<<endl;
        else
        cout<<fixed<<setprecision(1)<<n/m<<endl;
}


    return 0;
}
