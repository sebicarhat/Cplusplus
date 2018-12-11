#include <fstream>
using namespace std;
int st[100],n;
ifstream f("submultimi.in");
ofstream g("submultimi.out");
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
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
void back(int p)
{
	int pval;
	for(pval=st[p-1]+1;pval<=n;pval++)
	{
	st[p]=pval;
	afisare(p);
	back(p+1);
	}

}
int main(int argc, char** argv) {
	f>>n;
	back(1);
	return 0;
}
