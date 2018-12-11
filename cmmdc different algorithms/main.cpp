#include <iostream>

using namespace std;
int euclid(int a, int b)
{
    int c;
    while(b)
    {
        c=b;
        b=a%b;
        a=c;
    }
    return a;
}
int euclid_recursiv(int a, int b)
{
    if(b==0)
        return a;
    else return euclid_recursiv(b,a%b);
}
int cmmdc_scaderi_repetate(int a, int b)
{
    while(a!=b)
        if(a>b)
        a=a-b;
    else b=b-a;
    return a;
}
int cmmdc_scaderi_repetate_recursiv(int a, int b)
{
    if(a==b)
        return a;
    else if(a>b)
        return cmmdc_scaderi_repetate_recursiv(a-b,a);
    else
        return cmmdc_scaderi_repetate_recursiv(a,b-a);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"CMMDC dintre "<<a<<" si "<<b<<" este: "<<euclid(a,b);
    return 0;
}
