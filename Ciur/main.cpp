#include <fstream>
#include<iostream>
using namespace std;
ifstream f("ciur.in");
ofstream g("ciur.out");
    bool ciur[2000001];
int main()
{
    int i,j,n,k=0;
    f>>n;
for(i=2;i<n;++i)
if(ciur[i]==false)
{k++;
for(j=i+i;j<=n;j=j+i)
ciur[j]=true;}
    g<<k;
return 0;}
