#include <iostream>

using namespace std;
int st[100]={-999},n,v[100];
bool valid(int p)
{
    int i;
    if(st[1]>0)
        for(i=1;i<p;i+=2)
        if(st[i]<0||st[i+1]>0)
            return false;
        else
        for(i=1;i<p;i+=2)
        if(st[i]>0||st[i+1]<0)
        return false;
    return true;
}
void afisare(int p)
{
    for(int i=1;i<=p;++i)
        cout<<st[i]<<" ";
    cout<<endl;
}
void back(int p)
{
    for(int i=st[p-1]+1;i<=n;++i)
    {
        st[p]=v[i];
        //if(p>1)
        //if(valid(p))
        afisare(p);
    back(p+1);
    }
}
int main()
{
    int x;
    n=0;
    while(cin>>x)
    {n++; v[n]=x;}
    back(1);
    return 0;
}
