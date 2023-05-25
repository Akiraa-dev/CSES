/**
 *    author:  huydepzai
 *    created: 21.05.2023 18:24:53
**/

#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
using namespace std;

const ldb PI = 3.1415926535897932384626433832795;
const ll INF = 1000000000000000000;
const ll MOD = 1000000007;
const ll MOD2 = 1000000009;
const ldb EPS = 1e-6;

void solve() {
	long long n; cin >> n;
	long long result = 0;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for(int i = 1; i < n; i++){
		if(a[i] > a[i - 1]){
			continue;
		}
		else {
			result += (a[i - 1] - a[i]);
			a[i] = a[i - 1];
		}
	}
	cout << result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	solve();
	return 0;
}

/**
  *    {\__/}
  *    (• .•)
  *    / >
**/