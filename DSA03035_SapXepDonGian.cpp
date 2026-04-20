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
        int a[n+1], pos[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pos[a[i]] = i;
        }
        int mx = -1, k = 1;
        for (int i = 1; i < n; i++){
            if (pos[i] < pos[i+1]) {
                k++;
                mx = max(mx, k);
            }
            else k = 1;
        }
        cout << n - mx;

    }
    return 0;
}