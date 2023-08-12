#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int n,m;
map<string,ll> e_num_for_state;
map<string,map<string,ll>> e;
map<string,ll> cand_voters;
map<ll,set<string>, greater<ll> > voters_cand;

int main()
{
    cin >> n;
    for(int i=0; i<n; ++i){
        string s;
        ll x;
        cin >> s >> x;
        e_num_for_state[s] = x;
    }

    cin >> m;
    for(int i=0; i<m; ++i){
        string s;
        string c;
        cin >> s >> c;
        e[s][c]++;
        cand_voters[c] = 0;
    }

    for(auto s:e){
        string state = s.first;
        ll smax = 0;
        string scand="";
        for(auto c:s.second){
            string cand = c.first;
            ll votes = c.second;
            //cout << state << ' ' << cand << ' ' << votes << endl;
            if(votes > smax){
                smax = votes;
                scand = cand;
            }
        }
        ll svotes = e_num_for_state[state];
        //cout << state << ' ' << scand << ' ' << smax 
        //     << ' ' << svotes << endl;
        cand_voters[scand] += svotes;
    }

    //cout << endl;
    for(auto i:cand_voters) {
        string scand = i.first;
        ll svotes = i.second;
        voters_cand[svotes].insert(scand);
        //cout << scand << ' ' << svotes << endl;
    }

    //cout << endl;

    for(auto i:voters_cand){
        for(auto v:i.second){
            cout << v << ' ' << i.first << endl;
        }
    }

    return 0;
}
