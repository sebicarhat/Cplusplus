#include <fstream>
using namespace std;
int st[100],n,v[100],j=0,sum=0,p,maxim=0;
ifstream f("cerc.in");
ofstream g("cerc.out");
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
{   sum=1;
	st[p+1]=st[1];
	for(int i=1;i<=p;++i)
	{
	sum+=st[i]*st[i+1];
	}
	if(sum>maxim)
    {
        maxim=sum;
        for(int i=1;i<=p+1;++i)
        v[i]=st[i];
    }
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
	for(int i=1;i<=n;++i)
        g<<v[i]<<" ";
        g<<"\n";
	return 0;
}


