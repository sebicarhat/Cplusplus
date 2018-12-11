#include<iostream>
using namespace std;
int main()
{int a,b,c,d,e;
int k=0,v=0,x=0,z=0;
cin>>a>>b>>c>>d>>e;
if(a>0)v++;
if(a<0)x++;
if(b>0)v++;
if(b<0) x++;
if(c>0)v++;
if(c<0) x++;
if(d>0)v++;
if(d<0) x++;
if(e>0)v++;
if(e<0)x++;
if(a%2==1||a%2==-1)
z++;
else k++;
if(b%2==1||b%2==-1)z++;
else k++;
if(c%2==1||c%2==-1)z++;
else k++;
if(d%2==1||d%2==-1)z++;
else k++;
if(e%2==1||e%2==-1)z++;else k++;
cout<<k<<" valor(es) par(es)"<<endl;
cout<<z<<" valor(es) impar(es)"<<endl;
cout<<v<<" valor(es) positivo(s)"<<endl;
cout<<x<<" valor(es) negativo(s)"<<endl;
return 0;}
