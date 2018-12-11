#include<iostream>
 #include<iomanip>
using namespace std; 
int main() 
{ 
int c1,p1,c2,p2;
float b1,b2,value;
cin>>c1; cin>>p1;
cin>>b1; cin>>c2;
cin>>p2; cin>>b2;
value=(float)(p1*b1)+(p2*b2);
cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<value<<endl;
return 0; }
