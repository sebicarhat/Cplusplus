#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=n-1;i>=1;i=i-1)
    n=n*i;
    cout<<n<<endl;
 
    return 0;
}
