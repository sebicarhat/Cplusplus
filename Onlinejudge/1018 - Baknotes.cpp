#include<iostream>
using namespace std;
int main()
{
	int n,x,a1,a2,a3,a4,a5,a6,a7;
	cin>>n;
		cout<<n<<endl;
	a1=n/100;
	cout<<a1<<" nota(s) de R$ 100,00"<<endl;
	a2=n-(n/100)*100;
	cout<<a2<<" nota(s) de R$ 50,00"<<endl;
	a3=a2-(a2/50)*50;
	cout<<a3<<" nota(s) de R$ 20,00"<<endl;
	a4=a3-(a3/20)*20;
		cout<<a4<<" nota(s) de R$ 10,00"<<endl;
	a5=a4-(a4/10)*10;
	cout<<a5<<" nota(s) de R$ 5,00"<<endl;
	a6=a5-(a5/5)*5;
		cout<<a6<<" nota(s) de R$ 2,00"<<endl;
	a7=a6-(a2/2)*2;
		cout<<a7<<" nota(s) de R$ 1,00"<<endl;
	
	

	


	return 0;
	
	
}
