#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n;
    int f,p,a;
    cin>>n;
    p=a=1;
    cout<<"0 "<<p<<" "<<a;
    for(i=3;i<=n-1;i++)
    {
    f=p+a;
    cout<<" "<<f;
    a=p;
    p=f;
 
}
    cout<<endl;
 
    return 0;
}
