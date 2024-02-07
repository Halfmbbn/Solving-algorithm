#include <bits/stdc++.h>

using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5}; 

void combi(int s, vector<int> b){
    if(b.size() == k){
        for (int i: b) cout << a[i] << " ";
        cout << "\n";
        return;
    }

    for(int i = s + 1; i < n; i++) {
        b.push_back(i);
        combi(i, b);
        b.pop_back();
    }
    return;
}

int main(){
    vector<int> b;
    combi(-1, b);
    return 0;
}
