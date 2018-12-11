#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;.
vector <int> v;
vector<int>::iterator it;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        v.push_back(n%10);
        n/=10;
    }
    sort(v.begin(),v.end());
    for(it=v.end()-1;it>=v.begin();--it)
    cout<<*it;
    return 0;
}
