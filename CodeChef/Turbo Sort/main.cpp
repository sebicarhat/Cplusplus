#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int x, int y)
    {
        if(x>y)
            return false;
        return true;
    }
int main()
{   int n,a[100],i;
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>a[i];
    sort(a+1, a+n+1, cmp);
    for(i=1;i<=n;++i)
cout<<a[i]<<endl;
return 0;
}
