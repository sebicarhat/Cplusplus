#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <string>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <cassert>
using namespace std;
vector<int>v;
vector<int>::iterator it;
int main()
{
    int n,i,x,pos=0;
    cin>>n;
  //CITIRE
    for(i=1;i<=n;++i)
  {
      cin>>x;
      v.push_back(x);
  }
  //CITIRE SI MEMORARE INVERSA
  /*for(i=1;i<=n;++i)
  {
      cin>>x;
    pos=v.insert(i,x);
  }*/
  //AFISARE
  next_permutation(v.begin(), v.end());
  //reverse(v.begin(),v.end());
  //if(find(v.begin(), v.end(), 4) == v.end()) cout<<"Nr 4 nu se gaseste in vector";

  //for(it=v.begin();it!=v.end();it++)
    //cout<<*it;
    for(i=0;i<v.size();++i)
        cout<<v[i];
    return 0;
}

