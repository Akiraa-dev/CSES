// author: akira
#include <bits/stdc++.h>
#define endl '\n'
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define cint(x) int(x - '0')
#define cchar(x) char(x + '0')
#define pb push_back
#define fi first
#define se second
#define pii pair<int, int>
#define llll pair<long long, long long>
#define gcd(x, y) __gcd(x, y)
#define lcm(x, y) x/__gcd(x, y)*y
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
typedef long long ll;
typedef long double ldb;
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const long long INFLL = (long long)1e18 + 7;
void sol() {
    ll n; cin >> n;
    vector<bool> v(n + 1, false);
    ll x;
    for(ll i = 0; i < n - 1; i++) {
        cin >> x; v[x] = true;
    }

    for(ll i = 1; i <= n; i++) {
        if(v[i] == false) cout << i;
    }

}
int main() {
    fastIO
//    freopen("test.inp", "r", stdin);
//    freopen("test.out", "w", stdout);
    sol();
    return 0;
}
