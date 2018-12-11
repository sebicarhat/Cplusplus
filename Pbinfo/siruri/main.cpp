#include <iostream>
#include<fstream>
#include<math.h>
using namespace std;
ifstream f("siruri.in");
ofstream g("siruri.out");
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,k,st[100];
bool valid(int p)
{
	bool ok=true;
	for(int i=1;i<p;++i)
	if(abs(st[i]-st[i+1])>2)
	ok=false;
	return ok;
}

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
		if(valid(p))
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
