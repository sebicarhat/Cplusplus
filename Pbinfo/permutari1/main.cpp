#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("permutari1.in");
ofstream fout("permutari1.out");
int sol[10] ,n;
bool valid(int p){
	for(int i=1;i<p;++i)
		if(sol[p]==sol[i])
			return 0;
	return 1;
}
void back(int p){
	for(int i=n ; i>=1 ; --i)
	{
		sol[p]=i;
		if( valid(p) )
			if(p==n){
            for( int j=1;j<=n;j++)
                fout<<sol[j]<<" ";
				fout<<endl;
			}
			else
				back(p+1);
	 }
}
int main(){
	fin>>n;
	back(1);
	return 0;
}
