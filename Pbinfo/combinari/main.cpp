#include <iostream>
#include<fstream>
using namespace std;
ifstream f("combinari.in");
ofstream g("combinari.out");
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k,st[100];
void afisare(int p)
{
	for(int i=1;i<=p;++i)
	g<<st[i]<<" ";
	g<<"\n";
}
void back(int p)
{
	for(int pval=st[p-1]+1;pval<=n;++pval)
	{
		st[p]=pval;
		if(p==k)
		afisare(p);
		else back(p+1);
	}
}

int main(int argc, char** argv) {
	f>>n>>k;
	back(1);
	return 0;
}
