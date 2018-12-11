#include<iostream>
 #include<iomanip>
 #include<math.h>
 using namespace std;
 int main()
 {
    int n,h,m,s,x;   
     cin>>n;
     x=n;
     h=x/3600;
     x=n-(h*3600);
     m=x/60;
     s=x%60;
  cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}
