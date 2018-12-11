#include <iostream>

using namespace std;

int main()
{
    int n,p=1;
    cin>>n;
    if(n<100) cout<<"Reintroduceti nr de 3 cifre:";
    else{
        p=(n%10) * (n/100);
        cout<<p;
    }
    return 0;
}
