#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y,i,s=0;
    cin>>x>>y;
    if(x<y)
    {
    for(i=x;i<=y;i++)
    if(i%13!=0) s=s+i;
}
    else
    if(x>y)
    {
    for(i=y;i<=x;i++)
    if(i%13!=0) s=s+i;}
    cout<<s<<endl;
    return 0;
 
}
