#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,n,x;
    int fib[100],p,a;
    cin>>n;
    p=a=1;
      fib[0]=0;
      fib[1]=1;
      fib[2]=1;
            for(i=2;i<=61;i++)
            {
            fib[i+1]=p+a;
            a=p;
            p=fib[i+1];
            }
    for(int j=1;j<=n;++j)
    {
      cin>>x;
        cout<<"fib("<<x<<") = "<<fib[x]<<"\n";
    }
    cout<<endl;

    return 0;
}
