#include <iostream>

using namespace std;

void sortare_selectie(int n, int v[])
{
    int aux;
    for(int i=0;i<n-1;++i)
        for(int j=i+1;j<n;++j)
        if(v[i]>v[j])
    {
        aux=v[i];
        v[i]=v[j];
        v[j]=aux;
    }
}
int main()
{
    int n,i,j,v[100],x;
    cin>>n;
    for(i=0;i<n;++i)
        cin>>v[i];
    ///sortare
    sortare_selectie(n,v);
    for(i=0;i<n;++i)
        cout<<v[i]<<" ";
}
