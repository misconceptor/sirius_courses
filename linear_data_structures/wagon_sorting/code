#include <bits/stdc++.h>
using namespace std;

deque <int> r1,middle;
bool is_middle[2002];
int n;
bool res = true;

int main() 
{
    cin >> n;
    for(int i=1; i<=n; ++i){
        int q;
        cin >> q;
        r1.push_back(q);
    }
    
    for(int i=1; i<=n; ++i){
        if(is_middle[i]){
            if(middle.front() == i){
                middle.pop_front();
                is_middle[i] = false;
            } else {
                res = false;
                break;
            }
        } else {
            while(r1.front() != i){
                int v = r1.front();
                r1.pop_front();
                is_middle[v] = true;
                middle.push_front(v);
            }
            r1.pop_front();
        }
    }

    res ? (cout << "YES" << endl) : (cout << "NO" << endl); 

    return 0;
}
