#include <iostream>
#include<fstream>
using namespace std;
ifstream f("aranjamente.in");
ofstream g("aranjamente.out");
int n,k,st[1000];
bool valid(int p)
{
	bool ok=true;
	for(int i=1;i<p;++i)
	if(st[i]==st[p])
	ok=false;
	return ok;
}
void afisare(int p)
{
	for(int i=1;i<=p;++i)
	g<<st[i]<<" ";
	g<<"\n";
}
void back (int p)
{
	int pval;
	for(pval=1;pval<=n;++pval)
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
