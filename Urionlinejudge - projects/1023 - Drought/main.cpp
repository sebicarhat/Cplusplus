#include <iostream>
#include <iomanip>
#include <map>
#include <iterator>
#include <cmath>

using namespace std;

typedef unsigned uint;

int main()
{
    uint n;
    map<uint, uint> nMap;
    map<uint, uint>::iterator it;
    uint tp, tc;
    uint sum_tp(0), sum_tc(0);
    uint count(0);
    uint tmp;

    cout << setprecision(2) << fixed;

    while(1)
    {
        sum_tc=sum_tp=0;

        cin >> n;
        if(!n) break;

        if(count++) cout << endl;

        nMap.clear();
        for(uint i=0; i<n; i++)
        {
            cin >> tp >> tc;

            sum_tp += tp;
            sum_tc += tc;
            uint mean = (int)tc/tp;
            tmp=0;
            it = nMap.find(mean);
            if(it!=nMap.end())
            {
                tmp=it->second;
                nMap.erase(it);
            }
            nMap.insert(pair<uint, uint>(mean, tmp+tp));
        }

        cout << "Cidade# " << count << ":" << endl;
        for(it=nMap.begin(); it!=nMap.end(); it++)
        {
            if(it!=nMap.begin()) cout << " ";
            cout << it->second << "-" << it->first;
        }
        cout << endl;
        float mean = float(sum_tc)/sum_tp;
        cout << "Consumo medio: " << floor(mean*100)/100 << " m3.";
        cout << endl;
    }

    return 0;
}
