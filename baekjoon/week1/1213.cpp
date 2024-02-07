// 팰린드롬은 홀수가 2개 이상이면 성립 불가

#include <bits/stdc++.h>

using namespace std;

string s, ret;
int c[200], mid, flag; 
int main(){
    cin >> s;
    for (int x: s) c[x]++;

    for (int i='Z'; i >= 'A'; i--){
        if (c[i]) {
            if (c[i] & 1) {
                mid = i;
                flag++;
                c[i]--;
            }
            if (flag == 2) break;
            for(int j=0; j < c[i]; j += 2){
                ret = char(i) + ret;
                ret += char(i);  
            }
        }
    }
    if (mid) ret.insert(ret.begin()+ret.size() / 2, char(mid));
    if(flag == 2) cout << "I'm Sorry Hansoo" << "\n";
    else cout << ret << "\n";
}