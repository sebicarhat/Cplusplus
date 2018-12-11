#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j;
    char s;
    double a[12][12],sum=0,m;
    cin>>s;
    for(i=0;i<12;++i)
        for(j=0;j<12;++j)
        cin>>a[i][j];
    for(i=0;i<12;++i)
        for(j=0;j<12;++j)
            if(i<j &&i+j<12-1) sum=sum+a[i][j];
    if(s=='S') cout<<fixed<<setprecision(1)<<sum<<"\n";
    else if(s=='M') cout<<fixed<<setprecision(1)<<double(sum/30);
    return 0;
}
