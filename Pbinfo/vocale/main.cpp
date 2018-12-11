#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[40];
    cin>>s;
for(int i=0;i<strlen(s);++i)
if(s[i]=='a') cout<<'A';
else if(s[i]=='e') cout<<'E';
else if(s[i]=='i')cout<<'I';
else if(s[i]=='o') cout<<'O';
else if(s[i]=='u') cout<<'U';
else cout<<s[i];

    return 0;
}
