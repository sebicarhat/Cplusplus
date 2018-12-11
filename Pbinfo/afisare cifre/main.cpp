#include <iostream>

using namespace std;
int n,fr[100];
int main()
{
    cin>>n;
    while(n>0)
    {
        fr[n%10]++;
        n/=10;
    }
    for(int i=0;i<10;++i)
        if(fr[i]>0)
        cout<<i<<" ";
    return 0;
}
