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
        int n, k; cin >> n >> k;
        int a[n];
        for (int &x:a) cin >> x;
        sort(a, a+n);
        bool found = false;
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                int ob = k - a[i] - a[j];
                if (ob < 0) continue;
                int toFind = *lower_bound(a+j+1, a+n, ob);
                if (toFind == ob){
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        if (found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}