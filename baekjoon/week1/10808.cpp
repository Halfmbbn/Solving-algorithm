#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[26] = {0};
    string s;
    getline(cin, s);

    for (char x: s) a[int(x)-97]++;

    for (int x: a) cout << x << " ";
    cout << "\n";

}