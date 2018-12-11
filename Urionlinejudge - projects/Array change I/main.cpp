#include <iostream>

using namespace std;

int main()
{
int a[20],k=19,aux;
 for(int i=0;i<20;++i)
    cin>>a[i];
    for(int i=0;i<10;++i)
        {aux=a[i];
    a[i]=a[k];
    a[k]=aux;
    k--;}
     for(int i=0;i<20;++i)
    cout<<"N["<<i<<"] = "<<a[i]<<"\n";
    return 0;
}
