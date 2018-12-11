#include <iostream>
#include<vector>
using namespace std;
vector<int> v;
vector<int>::iterator it;
int main()
{
    int val;
    while(cin >> val && cin)
        v.push_back(val);
    for(it = v.begin(); it != v.end(); it++)
        cout<<*it <<" ";

    return 0;
}
