//#include <iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int st[100],n,nr[100],i;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
ifstream f("permutari2.in");
ofstream g("permutari2.out");
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
	for(pval=1;pval<=n;pval++)
	{
	st[p]=nr[pval];
	if(valid(p))
	if(p==n) afisare(p);
	else back(p+1);
	}
}
int main(int argc, char** argv) {
	f>>n;
	for(i=1;i<=n;++i)
	f>>nr[i];
		vector<int> v;
	for(i=1;i<=n;++i)
        v.push_back(i);
    do{
        for(i=0;i<n;++i)
            g<<nr[v[i]]<<" ";
        g<<endl;
    }
    while(next_permutation(v.begin(),v.end()));
	return 0;
}
