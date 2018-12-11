#include <iostream>

using namespace std;

int main()
{
    int x,s=0;
cin>>x;
while(x!=0)
{
    if(x%2==1 || x%2==-1) x=x+1;
    for(int i=1;i<=5;++i)
    {s=s+x;
    x=x+2;}
    cout<<s<<"\n";
    s=0;
    cin>>x;
}
    return 0;
}
