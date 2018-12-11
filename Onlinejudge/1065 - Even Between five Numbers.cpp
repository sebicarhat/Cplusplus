#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,k=0;
    cin>>a>>b>>c>>d>>e;
    if(a%2==0) k++;
    if(b%2==0) k++;
    if(c%2==0) k++;
    if(d%2==0) k++;
    if(e%2==0) k++;
    cout<<k<<" valores pares"<<endl;
    return 0;
}
