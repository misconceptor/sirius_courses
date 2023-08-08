#include <bits/stdc++.h>
using namespace std;

string s;
stack <char> p;

int main() 
{
    getline(cin,s);
    for(int i=0; i<s.size(); ++i){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            p.push(s[i]);
        }

        if(s[i] == ')') {
            if (!p.empty() && p.top() == '(') {
                p.pop();
            } else {
                cout << "no" << endl;
                return 0;
            }
        }

        if(s[i] == ']') {
            if (!p.empty() && p.top() == '[') {
                p.pop();
            } else {
                cout << "no" << endl;
                return 0;
            }
        }

        if(s[i] == '}') {
            if (!p.empty() && p.top() == '{') {
                p.pop();
            } else {
                cout << "no" << endl;
                return 0;
            }
        }
    }

    if(p.empty()){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
