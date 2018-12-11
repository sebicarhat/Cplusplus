#include <iostream>
#include<climits>
using namespace std;

int main()
{
    double a,b,c,aux;
    cin>>a>>b>>c;
    if(a<b) {aux=a;a=b;b=aux;}
    if(a<c) {aux=a;a=c;c=aux;}
    if(b<c) {aux=b;b=c;c=aux;}

    if(a>=(b+c)) cout<<"NAO FORMA TRIANGULO\n";
    else{
    if((a*a)==((b*b)+(c*c))) cout<<"TRIANGULO RETANGULO\n";
    if((a*a)>((b*b)+(c*c))) cout<<"TRIANGULO OBTUSANGULO\n";
    if((a*a)<((b*b)+(c*c))) cout<<"TRIANGULO ACUTANGULO\n";
    if(a==b && a==c) cout<<"TRIANGULO EQUILATERO\n";
    else
    if(a==b || b==c || c==a) cout<<"TRIANGULO ISOSCELES\n";
    }

    return 0;
}
