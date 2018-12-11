#include <iostream>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
using namespace std;

int main()
{
    char s[50];
   bool up=false;
    while(cin.getline(s,50))
    {
        for(int i=0;i<strlen(s);++i)
        {
            if(s[i]!=' ')
                    {  if(up==false)
                            {
                            s[i]=(toupper(s[i]));
                            up=true;
                            }
                    else
                        if(up==true)
                        {
                            s[i]=(tolower(s[i]));
                            up=false;
                        }
                    }
        }
    cout<<s<<"\n";
    up=false;
    }
    return 0;
}
