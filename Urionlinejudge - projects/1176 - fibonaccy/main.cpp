#include <iostream>
using namespace std;
unsigned long long int fib(int a)
{
    unsigned long long int fibo=1,prec=1,anteprec=0;
    if(a==0) return 0;
    if(a==1) return 1;
    for(int j=2;j<=a;++j)
    {fibo=prec+anteprec;
    anteprec=prec;
    prec=fibo;}
    return fibo;
}

int main()
{
    int n,x;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cin>>x;
        cout<<"Fib("<<x<<") = "<<fib(x)<<"\n";
    }
    return 0;
}
