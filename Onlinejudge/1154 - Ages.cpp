#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i,s=0,k=0;
    float m;
for(i=1;i<=100000;i++)
    {
    cin>>n;
    if(n<0) break;
   else
   k++;
   s=s+n;
 
}
m=(float)s/k;
    cout<<fixed<<setprecision(2)<<m<<endl;
 
    return 0;
}
