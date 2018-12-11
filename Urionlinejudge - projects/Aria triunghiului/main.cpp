/*
x1 y1 1
x2 y2 1
x3 y3 1
x1 y1 1
x2 y2 1
*/

#include <iostream>
#include<fstream>
#include<math.h>
#include<iomanip>
using namespace std;
double arie(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double produs=x1*y2+x2*y3+x3*y1-x3*y2-x1*y3-x2*y1;
    return 0.5*fabs(produs);
}

int main()
{
    int n;
    double x1,y1,x2,y2,x3,y3;
    ifstream fin("date.in");
    ofstream fout("date.out");
    fin>>n;
    for(int i=1;i<=n;++i)
      {

        fin>>x1>>y1>>x2>>y2>>x3>>y3;
    fout<<fixed<<setprecision(3)<<arie(x1, y1, x2, y2, x3, y3)<<"\n";}
    return 0;
}
