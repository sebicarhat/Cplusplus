#include <iostream>

using namespace std;

void buble_sort(int n,int a[])
{
    bool ok;
    int aux;
    do{
        ok=true;
        for(int i=0;i<n;++i)
            if(a[i]>a[i+1])
        {
            aux=a[i];
            a[i]=a[i+1];
            a[i+1]=aux;
            ok=false;
        }
    }while(!ok);
}
int main()
{
    int n,i,j,v[100],x;
    cin>>n;
    for(i=0;i<n;++i)
        cin>>v[i];
    ///sortare
    buble_sort(n,v);
    for(i=0;i<n;++i)
        cout<<v[i]<<" ";
}
