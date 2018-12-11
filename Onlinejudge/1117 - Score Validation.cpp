#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int  i,k=0;
    float n,m,s=0; 
    for(i=1;i<=1000;++i) 
{
    cin>>n;
    if(n>=1 && n<=10) 
    {
    k++;
    s=s+n;
    }
    else
    cout<<"nota invalida"<<endl;
    if(k==2) break;
}
m=s/2;
cout<<"media = "<<m<<endl;
    return 0;
 
}
