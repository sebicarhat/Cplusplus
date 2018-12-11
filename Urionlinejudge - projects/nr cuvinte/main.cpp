#include <fstream>
#include<iostream>
using namespace std;

int main()
{ char s;
int k=0,c=0;
   ifstream f("text.txt");
   while(f.get(s))
   {
   if(s==' ') k++;
   c++;
   if(s==' ') c--;
   }
   cout<<"Textul are "<<k<<" cuvinte si "<<c<<" litere\n";
    return 0;
}
