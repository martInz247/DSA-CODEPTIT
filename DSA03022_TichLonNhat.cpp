#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fi first
#define se second
#define pii pair<int,int>
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl "\n"

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

const int MOD = 1e9+7;
const int INF = 1e18;

signed main() {
    fastio;
    
    int t = 1;
    // cin >> t;
    while (t--) {
    int n; cin >> n;
	int M[100000];
	for (int i = 0; i < n; i++)cin >> M[i];
	sort(M, M + n,greater<>());
	int a = M[n - 1] * M[n - 2];
	int b = M[0] * M[1];
	int c = b * M[2];
	int d = M[0] * a;
	cout << max(a, max(b, max(c, d))) << endl;
    }
    return 0;
}