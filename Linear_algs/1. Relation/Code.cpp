#include <iostream>
using namespace std;

int a,b,c,d,ia,ib,ic,id,m[100005],n,k;

int main()
{
    cin >> n;
    for(k=0; k<n; ++k){
        cin >> m[k];
    }
    ia = 1;
    ib = 0;
    id = 0;
    d = m[id];
    a = m[ia];
    b = m[ib];

    for(k=2; k<n; ++k){
        ic = k;
        c = m[ic];
        if(m[k-1] < m[id]){
            id = k-1;
            d = m[id];
        }
        //cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
        if((a * d) < (b * c)){
            ia = ic;
            ib = id;
            a = m[ia];
            b = m[ib];

        }
        //cout << ia << ib << ic << id << endl;
    }

    if(a > b){
        cout << ib + 1 << ' ' << ia + 1 << endl;
    } else {
        cout << "0 0" << endl;
    }

    return 0;
}
