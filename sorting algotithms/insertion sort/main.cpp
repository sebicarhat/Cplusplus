#include <iostream>

using namespace std;
void sortare_insertie(int n, int v[])
{
    int x,i,j;
    for(i=1;i<n;++i)
        if(v[i]<v[i-1])
    {
        x=v[i];
        j=i-1;
        while(j>=0 && v[j]>x)
        {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=x;
    }

}
int main()
{
    int n,i,j,v[100],x;
    cin>>n;
    for(i=0;i<n;++i)
        cin>>v[i];
    ///sortare
    sortare_insertie(n,v);
    for(i=0;i<n;++i)
        cout<<v[i]<<" ";
}
