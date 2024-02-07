#include <bits/stdc++.h>

using namespace std;

int main(){
    int input = 0, total = 0;
    vector<int> a; 

    for (int i = 0; i < 9; i++){
        cin >> input;
        a.push_back(input);
        total += input;
    }

    for (int i = 0; i < 8 ; i++){
        for (int j = i + 1; j < 9; j++){
            if ((total - (a[i] + a[j])) == 100){
                a.erase(a.begin() + j);
                a.erase(a.begin() + i);
                sort(a.begin(), a.end());
                for (int x: a) cout << x << "\n";
                return 0;
            }
        }
    }
    return 0;    
}