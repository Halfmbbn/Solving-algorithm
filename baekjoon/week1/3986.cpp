#include <bits/stdc++.h>

using namespace std;

int n, cnt;
string s;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    // 1. 홀수면 안된다.
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        stack<char> stk;
        for(char c: s){
            if (stk.size() && stk.top() == c) stk.pop();
            else stk.push(c);
        }
        if(stk.size() == 0) cnt++;
    }

    cout << cnt << "\n";
}