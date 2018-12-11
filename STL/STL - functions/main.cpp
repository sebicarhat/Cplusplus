#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<tip>v;
    vector<tip>(n);
    vector<tip>(v2);
    vector<tip>(n,elem);
    //1.Operatii care nu modifica vectorul
    v.size();
    v1==v2;
    v1>=v2;
    v==c;
    //2.Atribuire
    v.swap(c); //inverseaza vectorul c cu v
    v.assign(v,elem);
    //3.Operatii cu iterator
    vector<tip>::iterator it;
    vector<tip>::reverse_iterator it;
    v.begin();
    v.end();
    v.rbegin();
    v.rend();
    v.insert(pos,elem);
    v.insert(pos,n,elem);
    v.push_back(elem);//insereaza la finalul vectorului un elem
    v.pop_back(elem);//sterge ultimul elem
    v.erase(pos);//sterge elem de pe pozitia pos
    v.erase(pos1,pos2);//sterge elem de la pozitia pos1 la pos2
    v.resize(num);//readuce vectorul la num elemente
    v.clear();//sterge toate elementele din vector
    return 0;
}
