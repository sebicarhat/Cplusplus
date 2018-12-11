#include<iostream>
#include <math.h>
using namespace std;
int main()
{
float x;
cin>>x;
// bancnote :100,50,20,10,5,2
int nr_bancnote;
cout<<"NOTAS:"<<endl;
nr_bancnote=int(x/100);
cout<<nr_bancnote<<" nota(s) de R$ 100.00"<<endl;

x=x-nr_bancnote*100;


nr_bancnote=int(x/50);
cout<<nr_bancnote<<" nota(s) de R$ 50.00"<<endl;

x=x-nr_bancnote*50;
nr_bancnote=int(x/20);
cout<<nr_bancnote<<" nota(s) de R$ 20.00"<<endl;

x=x-nr_bancnote*20;
nr_bancnote=int(x/10);
cout<<nr_bancnote<<" nota(s) de R$ 10.00"<<endl;
x=x-nr_bancnote*10;

nr_bancnote=int(x/5);
cout<<nr_bancnote<<" nota(s) de R$ 5.00"<<endl;
x=x-nr_bancnote*5;

nr_bancnote=int(x/2);
cout<<nr_bancnote<<" nota(s) de R$ 2.00"<<endl;
x=x-nr_bancnote*2;
//nr monede
cout<<"MOEDAS:"<<endl;
nr_bancnote=int(x/1);
cout<<nr_bancnote<<" moeda(s) de R$ 1.00"<<endl;
x=x-nr_bancnote*1;

nr_bancnote=int(x/0.50);
cout<<nr_bancnote<<" moeda(s) de R$ 0.50"<<endl;
x=x-nr_bancnote*0.50;

nr_bancnote=int((x/0.25));
cout<<nr_bancnote<<" moeda(s) de R$ 0.25"<<endl;
x=x-nr_bancnote*0.25;

nr_bancnote=int((x/0.10));
cout<<nr_bancnote<<" moeda(s) de R$ 0.10"<<endl;
x=x-nr_bancnote*0.10;

nr_bancnote=int((x/0.05));
cout<<nr_bancnote<<" moeda(s) de R$ 0.05"<<endl;
x=x-nr_bancnote*0.05;

nr_bancnote=(int)(ceil(x/0.01));
cout<<nr_bancnote<<" moeda(s) de R$ 0.01"<<endl;
x=x-nr_bancnote*0.01;
return 0;






}
