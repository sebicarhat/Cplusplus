#include <fstream>
#include<string.h>
using namespace std;
ifstream f("input.txt");
ofstream g("output.txt");
int main()
{

    char s[100];
    int m;
    char ultima_cifra;
    while(f>>s)
    {m=strlen(s);
    ultima_cifra=s[m-1];
    if(ultima_cifra=='1'||ultima_cifra=='3'||ultima_cifra=='5'||ultima_cifra=='7'||ultima_cifra=='9')
        g<<"NU\n";
    else if(ultima_cifra=='2'||ultima_cifra=='4'||ultima_cifra=='6'||ultima_cifra=='8'||ultima_cifra=='0')
    g<<"DA\n";}
    return 0;
}
