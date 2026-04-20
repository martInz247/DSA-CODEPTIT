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
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x:a) cin >> x;
        sort(a, a+n);
        k = min(k, n-k);
        int s1 = 0, s2 = 0;
        for (int i = 0; i < k; i++) s1 += a[i];
        for (int i = k; i < n; i++) s2 += a[i];
        cout << s2 - s1; cout << endl;
    }
    return 0;
}