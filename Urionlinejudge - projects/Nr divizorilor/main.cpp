#include <iostream>

using namespace std;

int main()
{
    int p=0, d=1, n,nr_div=1;
        cin>>n;
        while(n>1)
        {
            d++;
            p=0;
            while(n%d==0){p++; n=n/d;}
            if(p) nr_div=nr_div*(p+1);
        }
        cout<<nr_div<<endl;
    return 0;
}
