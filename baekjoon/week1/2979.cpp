#include <bits/stdc++.h>

using namespace std;


int main() {
    int a, b, c, f, e;
    int fair[4] = {0};

    int cars[101] = {0};

    cin >> a >> b >> c;
    fair[1] = a;
    fair[2] = b;
    fair[3] = c;

    for (int i = 0; i < 3; i++) {
        cin >> f >> e;
        for (int j= f; j < e; j++) cars[j]++;
    }
    int total = 0; 
    for (int i = 1; i < 101; i++) {
        total += fair[cars[i]] * cars[i];
    }
    cout << total << "\n";

}
 