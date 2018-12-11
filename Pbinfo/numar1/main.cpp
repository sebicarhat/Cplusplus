#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    if(n<100) cout<<"Reintroduceti nr de 3 cifre:";
    else{
    s=s+(n%10);
    s=s+((n/100)*10);
    cout<<s*s;
    }

              }
