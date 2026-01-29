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
        int n; cin >> n;
        vector <int> v(n);
        for (int &x : v) cin >> x;
        int ans = 0;
        for (int i = 0; i < n; i++){
            int k = i;
            for (int j = i + 1; j < n; j++){
                if (v[k] > v[j]) k = j;
            }
            if (k != i) {
                swap(v[k], v[i]);
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}