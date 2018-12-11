#include<iostream>
using namespace std;
int main()
{
    int n,a,s=0,i,j;
    cin>>a;
   for(j=1;j<=1000;++j)
    {cin>>n;
   if(n>0) break;
    }
        for(i=1;i<=n;++i)
        {s=s+a;
        a++;}
        cout<<s<<endl;
    return 0;

}
