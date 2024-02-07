#include <bits/stdc++.h>
using namespace std;

vector<string> split(string input, string d) {
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while ((pos = input.find(d)) != string::npos) {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + d.length());
    }
    ret.push_back(input);
    return ret;
}

int main(){
    string s = "hello this is new sentence";
    vector<string> a = split(s, " ");
    for (string b: a) cout << b << "\n";
}