#include<iostream>
using namespace std;
int main()
{
int a,b,t;
cin>>a>>b;
if(b<a) {t=(24-a)+b	;
cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
}

if (b>a){ t=b-a;
cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
}
return 0;

}
