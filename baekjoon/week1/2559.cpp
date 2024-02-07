// #include <bits/stdc++.h>

// using namespace std;

// int n, k, t, x;

// int main(){
//     vector<int> temp, sum;
//     cin >> n >> k;
//     for (int i = 0; i < n; i++){
//         cin >> t;
//         temp.push_back(t);
//         if (i == 0) sum.push_back(t);
//         else if (i < k) {
//             sum.push_back(sum[i-1] + t);
//         }
//         else {
//             sum.push_back(sum[i-1] + t - temp[i-k]);
//         } 
//     }
//     x = sum[k-1];
//     for (int i = k; i < n; i++){
//         if (x < sum[i]) x = sum[i];
//     }
//     cout << x << "\n";
// }

#include<bits/stdc++.h> 
using namespace std;  
typedef long long ll;  
int n, k, temp, psum[100001], ret = -1000000; 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> n >> k; 
	for(int i = 1; i <= n; i++){
		cin >> temp; psum[i] = psum[i - 1] + temp; 
	} 
    for (int x = 1; x < n; x++) cout << psum[x] << " ";
    cout << "\n";
	for(int i = k; i <= n; i++){
		ret = max(ret, psum[i] - psum[i - k]);
	}
	cout << ret << "\n";
    return 0;
}