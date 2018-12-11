#include <iostream>

using namespace std;

int main()
{
    int x[10],i;
    for(i=0;i<=9;++i)
        cin>>x[i];
    for(i=0;i<=9;++i)
        if(x[i]<=0) x[i]=1;
    for(i=0;i<=9;++i)
    cout<<"X["<<i<<"] = "<<x[i]<<"\n";
    return 0;
}
