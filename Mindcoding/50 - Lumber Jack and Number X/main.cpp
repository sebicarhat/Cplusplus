#include <iostream>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int l=x.size();
    for(int i=0;i<l-1;++i)
        cout<<x[i]<<"-";
    cout<<x[l-1];
    return 0;
}
