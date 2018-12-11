#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    bool bara=false;
    bool stea=false;
    char s[100];
    char i1[]="<i>";
    char i2[]="</i>";
    char b1[]="<b>";
    char b2[]="</b>";
    while(cin.getline(s,100))
    {

        for (int i=0;i<strlen(s);++i)
        {
            if(s[i]=='_' && bara==false) {cout<<"<i>"; bara=true;}

            else if(s[i]=='_' && bara==true) {cout<<"</i>"; bara=false;}

            else if(s[i]=='*' && stea==false) {cout<<"<b>"; stea=true;}

            else if(s[i]=='*' && stea==true) {cout<<"</b>"; stea=false;}

            else cout<<s[i];
        }
        cout<<"\n";
        bara=false;
        stea=false;
    }
    return 0;
}
