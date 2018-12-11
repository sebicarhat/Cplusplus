#include <fstream>
using namespace std;
int st[11],n,i;
ifstream f("permpf.in");
ofstream g("permpf.out");
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool valid(int p)
{
	bool ok=true;
	if(st[p]==p)
        ok=false;
	for(int i=1;i<p;++i)
	if(st[i]==st[p])
	ok=false;
	return ok;
}
void afisare(int p)
{
    for( i=1;i<=p;++i)
	g<<st[i]<<" ";
	g<<"\n";
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
	back(1);
	return 0;
}
