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
        int hi = 0, sum = 0;
        for (int lo = 0; lo < n; lo++) {
            while (hi < n && a[hi] - a[lo] < k ){
                hi++;
            }
            sum += (hi - lo -1 );
        }
        cout << sum << endl;

    }
    return 0;
}