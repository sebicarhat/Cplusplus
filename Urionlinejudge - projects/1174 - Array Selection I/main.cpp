#include <iostream>

using namespace std;

int main()
{
    float x;
    int i=0;
    while(cin>>x)
    {
       if(x<=10) cout<<"A["<<i<<"] = "<<x<<"\n";
       ++i;
    }
    return 0;
}
