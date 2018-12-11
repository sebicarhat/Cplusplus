#include <iostream>

using namespace std;

int main()
{
    int i=1,nr=0,x,p=1;
    cin>>x;
    while(x>0)
              {if(i!=2){nr=nr+(x%10)*p;
                           p=p*10;}
              x=x/10;
              i++;
              }
            cout<<nr;
    return 0;
}
