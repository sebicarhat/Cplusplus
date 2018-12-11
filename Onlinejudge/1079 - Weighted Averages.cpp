#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
	int i,n;
float a[1000],b[1000],c[1000];
double MEDIA;
cin>>n;
for(i=1;i<=n;i++)
{
cin>>fixed>>setprecision(1)>>a[i];
cin>>fixed>>setprecision(1)>>b[i];
cin>>fixed>>setprecision(1)>>c[i];
}
for(i=1;i<=n;i++)
{
MEDIA = ((a[i] * 2) + (b[i] * 3) + (c[i] * 5)) / (2 + 3 + 5);
cout << fixed << setprecision(1)<< MEDIA << endl;
MEDIA = 0;
}
return 0;
}
