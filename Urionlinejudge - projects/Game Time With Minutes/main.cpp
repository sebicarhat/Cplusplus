#include <iostream>

using namespace std;

int main()
{
    int h1,h2,m1,m2,k=0,j,i,H1,H2;

cin>>h1>>m1>>h2>>m2;
        H1=h1*60;
        H2=h2*60;
        j=H1+m1;
        while(j!=H2+m2)
        {
            k++;
            j++;
            if(j==1440)
                j=0;

        }
    cout<<"O JOGO DUROU "<<k/60<<" HORA(S) E "<<k%60<<" MINUTO(S)\n";

    return 0;
}
