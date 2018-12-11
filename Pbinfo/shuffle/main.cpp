#include <fstream>
using namespace std;
int st[100],n,v[100];
bool verif;
ifstream f("shuffle.in");
ofstream g("shuffle.out");
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool valid(int p)
{
	bool ok=true;
	for(int i=1;i<p;++i)
	if(st[i]==st[p])
	ok=false;
	else
	for(int j=1;j<p;++j)
	if((st[i]==v[j]&&st[i+1]==v[j+1])||(st[i]==v[j+1] && st[i+1]==v[j]))
	ok=false;
	return ok;
}
void afisare(int p)
{
	for(int i=1;i<=p;++i)
	g<<st[i]<<" ";
	g<<"\n";
	verif=true;
}
void back(int p)
{
	int pval;
	for(pval=1;pval<=n;pval++)
	{
	st[p]=pval;
	if(valid(p))
	if(p==n)
	afisare(p);
	else back(p+1);
	}
}
int main(int argc, char** argv) {
	f>>n;
	for(int i=1;i<=n;++i)
	f>>v[i];
	back(1);
	if(!verif) g<<"nu exista";
	return 0;
}
