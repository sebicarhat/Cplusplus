#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct elev
{
	char nume[10],prenume[20];
	int nota;
}a[20],aux;
int n,i,j,s;
int main(int argc, char** argv) {
	cout<<"Nr de elevi:";
	cin>>n;
	for(i=1;i<=n;++i)
	{
		cout<<"Elevul "<<i<<": "<<endl;
		cout<<"Nume:";
		cin>>a[i].nume;
		cout<<"Prenume:";
		cin>>a[i].prenume;
		cout<<"Nota:";
		cin>>a[i].nota;
		s+=a[i].nota;
	}
	for(i=1;i<n;++i)
	for(j=i+1;j<=n;++j)
	if(a[i].nota<a[j].nota)
	{
		aux=a[i];
		a[i]=a[j];
		a[j]=aux;
	}
	cout<<"Afisarea elevilor promovati:\n";
	for(i=1;i<=n&&a[i].nota>=5;++i)
	cout<<a[i].nume<<" "<<a[i].prenume<<" "<<a[i].nota<<"\n";
	cout<<"Media notelor:"<<s/n<<"\n";
	return 0;
}
