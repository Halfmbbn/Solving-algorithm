// #include <bits/stdc++.h>

// using namespace std;

// int t, n;
// string c, type;
// int main(){
//     cin >> t;
//     for (int i = 0; i < t; i++) {
//         map<string, int> type_cnt;
//         int total = 0, cases = 1;

//         cin >> n;
//         for (int j = 0; j < n; j++) {
//             cin >> c >> type;
//             type_cnt[type]++;
//         }
        
//         for (auto it = type_cnt.begin(); it != type_cnt.end(); ++it) {
//             cout << it->first << ": " << it->second << endl; 
//             total += it->second;
//             cases *= it->second;
//         }
//         cout << total << ", " << cases << "\n";
//     }
    
   
// }

#include <bits/stdc++.h>
using namespace std;
int t, n;
string a, b;
int main(){
    cin >> t;
    while(t--){
        map<string, int> _map;
        cin >> n;
         for(int i = 0; i < n; i++){
            cin >> a >> b;
            _map[b]++;
        }
        long long ret = 1;
        for(auto c : _map){
            // 아무것도 안입는 경우도 추가
            ret *= ((long long)c.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
    return 0;
}
