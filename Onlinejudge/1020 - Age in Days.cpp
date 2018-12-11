#include<iostream>
 #include<iomanip>
 #include<math.h>
 using namespace std;
 int main()
 {
    int x,n,zile,luni,an;    
     cin>>n;
     x=n;
     an=x/365;
     n=n-(an*365);
     luni=n/30;
     zile=n%30;
      
  cout<<an<<" ano(s)"<<endl;
  cout<<luni<<" mes(es)"<<endl;
  cout<<zile<<" dia(s)"<<endl;
    return 0;
}
