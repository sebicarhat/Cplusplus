#include<iostream>
#define ma(a,b) (a>b)?a:b
#include<string.h>
using namespace std;
int main()
{
	int t=0,l_max,l1,l2,i;
	char n1[1000],n2[1000];
	cin.getline (n1,1000);
	cin.getline (n2,1000);
	strrev(n1);
	strrev(n2);
	char rez[1001];
	l1=strlen(n1);
	l2=strlen(n2);
	l_max=max(l1,l2);
	for(i=0;i<l_max;i++)
	{
		rez[i]=((n1[i]-48+n2[i]-48+t)%10)+48;
		t=(n1[i]-48+n2[i]-48)/10;
	}
	if(t==1) rez[l_max]='1';
    cout<<strrev(rez);
	return 0;
}
