#include <iostream>
#include<fstream>
using namespace std;
ifstream f("submdiv.in");
ofstream g("submdiv.out");
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int st[100],j,d[100],k;
bool exista=false;
bool valid(int p)
{
	bool ok=true;
	for(int i=1;i<p;++i)
	if(st[i]>=st[p])
	ok=false;
	return ok;
}
void afisare(int p)
{
    exista=true;
	for(int i=1;i<=p;++i)
	g<<st[i]<<" ";
	g<<"\n";
}
void back(int p)
{
	for(int pval=1;pval<=j;++pval)
	{
		st[p]=d[pval];
		if(valid(p))
		if(p==k)
		afisare(p);
		else back(p+1);
	}
}

int main(int argc, char** argv) {
	int nr;
	j=0;
	f>>nr>>k;
	for(int i=1;i<=nr;++i)
	if(nr%i==0)
	{
	j++;
	d[j]=i;
	}
	back(1);
	if(!exista) g<<"fara solutie";
	return 0;
}
