#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
    float A,B,C;
    double tri ,circ ,trap ,sq ,rect,pi = 3.14159;
    cin>>A;
    cin>>B;
    cin>>C;
    tri=(A*C)/2;
    circ=pi*pow(C,2);
    trap=((A+B)*C)/2;
    sq=pow(B,2);
    rect=A*B;
    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<circ<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<trap<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<sq<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<rect<<endl;
  
    return 0;
}
