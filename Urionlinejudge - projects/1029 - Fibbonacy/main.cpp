#include <iostream>
int k=-1;
using namespace std;
int fib(int num)
{
    k++;
	if(num == 0)
		return 0;

	if(num == 1)
        return 1;

	int result = fib(num - 1) + fib(num - 2);
    return result;
}

int main()
{
    int n,x,i;
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cin>>x;
        if(x==0) cout<<
        cout <<"fib("<<x<<") = "<<k<<" calls = "<< fib(x) << endl;
        k=-1;
    }

}
