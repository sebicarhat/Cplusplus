#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>c&&d>a&&(a+b)<(c+d)&&c>0&&d>0 )
    cout<<"Valores aceitos";
    else cout<<"Vlarores nao aceitos";
    cout<<endl;
     
    return 0;
 
}
