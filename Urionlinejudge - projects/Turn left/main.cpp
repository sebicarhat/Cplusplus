#include <iostream>

using namespace std;

int main()
{   int x,k=0,i;
    char c;
    cin>>x;
    while(x!=0)
    {

    for(i=1;i<=x;++i)
    {
        cin>>c;
        if(c=='D' || c=='d') k++;
        else if(c=='E' || c=='e') k--;
    }
    if(k%4==1 || k%4==-3) cout<<"L\n";
    else if(k%4==2 || k%4==-2) cout<<"S\n";
    else if(k%4==3 ||  k%4==-1) cout<<"O\n";
    else if(k%4==0) cout<<"N\n";
    k=0;
    cin>>x;
    }
    return 0;
}
