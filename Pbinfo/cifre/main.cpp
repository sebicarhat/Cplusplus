#include <iostream>

using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    if(n<10) cout<<"Reintroduceti nr:";
    else{
    s+=n%10;
    n/=10;
    s+=n%10;
    cout<<s;
    }
    return 0;
}

