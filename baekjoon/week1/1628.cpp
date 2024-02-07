#include <bits/stdc++.h>

using namespace std;

int a, b, c, l;
vector<int> x;
int main(){
    cin >> a >> b >> c;
    
    int t = a;
    x.push_back(a % c);
    1000
// 10, 4, 4,  
    while (true) {
        t *= a;
        l = t % c;
        if (l == x[0]) break;
        x.push_back(l);
    }

    for (int k: x) cout << k << " "; 

    cout << endl;

    cout << x[b % x.size()] << "\n";
}