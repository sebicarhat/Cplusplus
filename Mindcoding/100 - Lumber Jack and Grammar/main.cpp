#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s,100);
    int l=strlen(s);
    for(int i=0;i<l;++i)
        if(s[i]=='-' || s[i]=='.') cout<<"";
    else if(s[i]==',') cout<<" ,";
    else cout<<s[i];

    return 0;
}
