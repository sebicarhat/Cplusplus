#include <iostream>
#include<string.h>
using namespace std;

int main()
{
   int n;
   char s[101];
   bool spatiu;
   cin>>n;
   cin.getline(s,100);
   for(int i=1;i<=n;i++)
   {
       bool spatiu=true;
       cin.getline(s,100);
       for(int j=0;j<strlen(s);++j)
        {
            if(s[j]==' ') spatiu=true;
            if(spatiu) if(s[j]!=' ') {cout<<s[j];spatiu=false;}
        }
        cout<<"\n";
   }
    return 0;
}
