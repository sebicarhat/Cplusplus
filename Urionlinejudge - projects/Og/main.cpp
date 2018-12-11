#include <iostream>

using namespace std;

int main()
{
    int l,r,s;
    cin>>l>>r;
    while(l!=0 && r!=0)
    {
        s=l+r;
        cout<<s<<endl;
        s=0;
        cin>>l>>r;
    }
    return 0;
}
