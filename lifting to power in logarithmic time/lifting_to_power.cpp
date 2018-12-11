#include <iostream>
using namespace std;
int main()
{
    long long baza,putere,rez=1;
    //ifstream f("lgput.in");
    cin>>baza>>putere;
    //f.close();
  long long adun=baza;
   while (putere>0)
   {
       if (putere%2!=0) rez=(rez*adun)%1999999973;
        adun=(adun%1999999973)*(adun%1999999973)%1999999973;
        putere=putere/2;
    }
  //ofstream g("lgput.out");
  cout<<rez;
  //g.close();
  return 0;
}
