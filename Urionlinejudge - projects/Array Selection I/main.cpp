#include <iostream>

using namespace std;

int main()
{   int a[100];
 for(int i=0;i<100;++i)
    cin>>a[i];
for(int i=0;i<100;++i)
 if(a[i]<=10) cout<<"A["<<i<<"] = "<<a[i]<<"\n";
    return 0;
}
