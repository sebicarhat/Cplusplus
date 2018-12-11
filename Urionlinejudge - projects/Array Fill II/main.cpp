#include <iostream>

using namespace std;

int main()
{
    int n,nr=0;
cin>>n;
for(int i=0;i<1000;++i)
    {if(nr==n) nr=0;
        cout<<"N["<<i<<"] = "<<nr<<"\n";
nr++;}

    return 0;
}
