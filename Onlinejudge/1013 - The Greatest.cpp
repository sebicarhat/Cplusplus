#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,ab;
    cin>>a>>b>>c;
    ab=((a+b+abs(a-b))/2+c+abs((a+b+abs(a-b))/2-c))/2;
    cout<<ab<<" eh o maior"<<endl;
    return 0;
}
