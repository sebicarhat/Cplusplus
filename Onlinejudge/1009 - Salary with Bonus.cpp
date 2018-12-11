#include<stdio.h>
using namespace std;
int main()
{
char name[100];
float salary,sales;
scanf("%s",name);
scanf("%f",&salary);
scanf("%f",&sales);
salary=salary+sales*0.15;
printf("TOTAL = R$ %.2f\n",salary);
return 0;
}
