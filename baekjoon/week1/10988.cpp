#include <bits/stdc++.h>

using namespace std;
string s, r;
int main() {
    cin >> s;
    r = s;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != r[i]) {
            cout << 0 << "\n";
            return 0;
        }
    }
    cout << 1 << "\n";

    return 0;
}