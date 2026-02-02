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
        int l = -1, r = -1;
        for (int i = 0; i < n; i++){
            if (v[i] > v[i+1]){
                l = i;
                break;
            }
        }
        for (int i = n-1; i > 0; i--){
            if (v[i] < v[i-1]){
                r = i;
                break;
            }
        }
        int mx = LLONG_MIN, mn = LLONG_MAX;
        for (int i = l; i <= r; i++){
            mx = max(mx, v[i]);
            mn = min(mn, v[i]);
        }
        while (l > 0 && mn < v[l-1]) l--;
        while (r < n - 1 && mx > v[r+1]) r++;
        cout << l + 1 << " " << r + 1<< endl;
    }
    return 0;
}