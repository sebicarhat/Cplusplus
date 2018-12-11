#include <iostream>
#include <algorithm>
#include <vector>
   
using namespace std ;
   
int A, B, C ;
vector <int> Q ;
   
   
   
int main()
{
    cin >> A >> B >> C ;
    Q.push_back(A) ;
    Q.push_back(B) ;
    Q.push_back(C) ;
    sort(Q.begin(), Q.end()) ;
    cout << Q[0] << '\n' ;
    cout << Q[1] << '\n' ;
    cout << Q[2] << '\n' << '\n' ;
    cout << A << '\n' << B << '\n' << C << '\n';
       
       
    return 0;
}
