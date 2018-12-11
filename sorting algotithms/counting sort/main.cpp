#include <iostream>

using namespace std;

void sortare_numarare(int n, int a[])
{
    int i,j,b[100]={0},c[100];
    for(i=0;i<n;++i)
        c[i]=a[i];///creeam o copie a vectorului
    for(i=0;i<n;++i)
        for(j=i+1;j<n;++j)
        if(a[i]<a[j])
        b[j]++;
    else
        b[i]++;///determinam pentru fiecare element cate elemente mai mici exista in vector
    for(i=0;i<n;++i)
        a[b[i]]=c[i];///rescriem vectorul, elementul care nu are nici un numar mai mic fiind pe pozitia 0
        ///cel care are 1 element mai mic decat el pe pozitia 1 etc.
}
int main()
{
    int n,i,j,v[100],x;
    cin>>n;
    for(i=0;i<n;++i)
        cin>>v[i];
    ///sortare
    sortare_numarare(n,v);
    for(i=0;i<n;++i)
        cout<<v[i]<<" ";
}
