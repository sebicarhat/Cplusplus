#include <fstream>
#include<math.h>
using namespace std;
ifstream f("input.txt");
ofstream g("output.txt");

int main()
{
    long long n;
    while(f>>n)
    {
        if(sqrt(n)==floor(sqrt(n)))
            g<<n<<"\n";
    }

    return 0;
}
