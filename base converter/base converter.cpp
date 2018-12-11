#include<iostream>
using namespace std;
void baza(int x, int b)
{
if(x>b)
baza(x/b,b);
cout<<x%b;
}
void bazainvers(int x, int b)
{
    int n10=0,pb=1;
    do
    {
        n10=n10+(x%10)*pb;
        pb=pb*b;
        x=x/10;
    } while(x!=0);
    cout<<n10;
}
int main()
{
    int x,b;
    cout<<"Dati numarul:";
    cin>>x;
    cout<<"Dati baza:";
    cin>>b;
    bazainvers(x,b);
    return 0;
}
