#include <bits/stdc++.h>

using namespace std;

int n, pos;
string p, pre, suf;
int main() {
    cin >> n;
    cin >> p;

    pos = p.find("*");
    pre = p.substr(0, pos);
    suf = p.substr(pos + 1);
    
    string input;
    for (int i=0; i < n; i++) {
        cin >> input;
        if (input.size() < (pre.size() + suf.size())) {
            cout << "NE" << "\n";
            continue;    
        }
        else if (input.substr(0, pre.size()) != pre || input.substr((input.size() - suf.size())) != suf){
            cout << "NE" << "\n";
            continue;        
        }
        cout << "DA" << "\n";
        
    }
    return 0;
}