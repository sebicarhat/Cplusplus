#include<iostream>
using namespace std;
int main()
{
	int x,v[1000],i;
	for(i=1;i<=1000;i++)
	{
	cin>>v[i];
	if(v[i]!=2002) cout<<"Senha Invalida"<<"\n";
	if(v[i]==2002) break;}
	cout<<"Acesso Permitido"<<"\n";
	return 0;
	
}
