#include <iostream>
#include<fstream>
#include<math.h>
using namespace std;
ifstream f("sumdiv.in");
ofstream g("sumdiv.out");

int main()
{
    int p=0, d=2,nr_div=1,nr;
        cin>>nr;
        while(nr>1)
        {
            p=0;
            while(nr%d==0){p++; nr=nr/d;}
            if(p) cout<<d<<"^"<<p<<endl;
            d++;
        }
    return 0;
}
