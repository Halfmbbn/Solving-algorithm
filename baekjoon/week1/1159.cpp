#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string t;
    cin >> n;

    int c[26] = {0};

    for (int i = 0; i < n; i++){
        cin >> t;
        c[int(t[0])-97]++;
    }

    string x;
    for (int i= 0; i < 26; i++) {
        if (c[i] >= 5) x += char(i+97);
    }
    if (x.size() > 0) cout << x;
    else cout << "PREDAJA"; 
}