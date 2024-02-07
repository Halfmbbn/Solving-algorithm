#include <bits/stdc++.h>

using namespace std;

int n, t, k, cnt;
vector<int> x;
int main(){
    cin >> n >> t;

    for(int i = 0; i < n; i++) {
        cin >> k;
        x.push_back(k);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if ((x[i]+x[j]) == t) cnt++; 
        }
    }
    cout << cnt << "\n";
}