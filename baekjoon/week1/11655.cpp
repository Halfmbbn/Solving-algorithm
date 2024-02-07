#include <bits/stdc++.h>

using namespace std;

string s, ret;
int main(){
    getline(cin, s);

    for (char x: s){
        if (x >= 65 && x < 91){
            ret += (((x-65) + 13) % 26) + 65;
        }
        else if (x >= 97 && x < 123){
            ret += ((x-97) + 13) % 26 + 97;
        }
        else ret += x;
    }

    cout << ret;
}