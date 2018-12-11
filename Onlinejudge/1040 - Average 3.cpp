#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n,n1,n2,n3,n4,map,ma;
	cin>>fixed>>setprecision(1)>>n1>>n2>>n3>>n4;
	cin>>fixed>>setprecision(1)>>n;
	map=((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
	cout<<"Media: "<<map<<"\n";
	if(map<5.0) cout<<"Aluno reprovado."<<"\n";
	else
	if(map>=5.0 && map<=6.9) cout<<"Aluno em exame."<<"\n";
	cout<<"Nota do exame: "<<n<<"\n";
	ma=(map+n)/2;
	if(ma<=4.9) cout<<"Aluno reprovado."<<"\n";
	if(ma>=5.0) cout<<"Aluno aprovado."<<"\n";
	cout<<"Media final: "<<ma<<"\n";
	return 0;
	
}
